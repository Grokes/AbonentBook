#include "AbonentBook.h"

void AbonentBook::print() const
{
	for (auto el : abonents)
		std::cout << el << std::endl;
}

int AbonentBook::find(const String& str) const
{
	for (int i{}; i < abonents.size(); ++i)
	{
		if (abonents[i].name == str)
			return i;
	}

	return -1;
}

void AbonentBook::push_back(const Abonent& arg)
{
	abonents.push_back(arg);
}

void AbonentBook::pop_back()
{
	abonents.pop_back();
}

void AbonentBook::save(const char* path) const
{
	FILE* out;

	if (fopen_s(&out, path, "w") != NULL)
		return;

	//fprintf(out, "Кол-во абонентов: %i\n", abonents.size());
	for (auto& el : abonents)
	{
		fprintf(out, "ФИО: %s\n", el.name.getPointer());
		fprintf(out, "Домашний: %s\n", el.home_ph.getPointer());
		fprintf(out, "Рабочий: %s\n", el.work_ph.getPointer());
		fprintf(out, "Мобильный: %s\n", el.mobile_ph.getPointer());
		fprintf(out, "Примечание: %s\n\n", el.additional_inf.getPointer());
	}

	fclose(out);
}

AbonentBook* AbonentBook::load(const char* path)
{
	FILE* in;

	if (fopen_s(&in, path, "r") != NULL)
		return nullptr;

	AbonentBook* abonents = new AbonentBook{};
	const int BUF = 255;
	while (!feof(in))
	{
		char temp[5][BUF];
		fscanf_s(in, "ФИО: %s\n", &temp[0], BUF);
		fscanf_s(in, "Домашний: %s\n", &temp[1], BUF);
		fscanf_s(in, "Рабочий: %s\n", &temp[2], BUF);
		fscanf_s(in, "Мобильный: %s\n", &temp[3], BUF);
		fscanf_s(in, "Примечание: %s\n\n", &temp[4], BUF);
		
		abonents->push_back({ temp[0], temp[1], temp[2], temp[3], temp[4] });
	}

	fclose(in);

	return abonents;
}