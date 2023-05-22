#pragma once
#include <vector>
#include <iostream>
#include <stdio.h>
#include "Abonent.h"


class AbonentBook
{
private:
	std::vector<Abonent> abonents{};

public:
	AbonentBook() = default;
	AbonentBook(int)
	{
		abonents.push_back({ "Иван", "1" });
		abonents.push_back({ "Кирилл","2" });
	}

public:
	void print() const;
	int find(const String& str) const;
	void push_back(const Abonent& arg);
	void pop_back();
	void save(const char* path = "C:\\TestFolder\\TEST.txt") const;
	static AbonentBook* load(const char* path = "C:\\TestFolder\\TEST.txt");
};

