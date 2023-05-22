#include <iostream>
#include "Abonent.h"
#include "String.h"
#include <Windows.h>
#include <vector>
#include "AbonentBook.h"

int String::count{ 0 };
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	AbonentBook a1(1);
	cout << "Создали Книгу" << endl;
	a1.print();
	cout << "\n\n\n";

	cout << "Добавили пользователя" << endl;
	a1.push_back({ "Дмитрий", "123141" });
	a1.print();
	cout << "\n\n\n";

	cout << "Удалили пользователя" << endl;
	a1.pop_back();
	a1.print();
	cout << "\n\n\n";
	
	cout << "Ищем пользователя \"Кирилл\" и возвращаем индекс: ";
	cout << a1.find("Кирилл");

	cout << endl << "Сохранили в файл" << endl;
	// Нужно изменить путь по умолчанию
	a1.save();
	cout << endl << "Загрузили из файла" << endl;
	AbonentBook* a2 = AbonentBook::load();
	a2->print();

	return 0;
}

