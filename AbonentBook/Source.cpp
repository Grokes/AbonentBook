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
	cout << "������� �����" << endl;
	a1.print();
	cout << "\n\n\n";

	cout << "�������� ������������" << endl;
	a1.push_back({ "�������", "123141" });
	a1.print();
	cout << "\n\n\n";

	cout << "������� ������������" << endl;
	a1.pop_back();
	a1.print();
	cout << "\n\n\n";
	
	cout << "���� ������������ \"������\" � ���������� ������: ";
	cout << a1.find("������");

	cout << endl << "��������� � ����" << endl;
	// ����� �������� ���� �� ���������
	a1.save();
	cout << endl << "��������� �� �����" << endl;
	AbonentBook* a2 = AbonentBook::load();
	a2->print();

	return 0;
}

