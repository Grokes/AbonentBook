#pragma once
#include <iostream>
#include "String.h"

class Abonent
{
private:
	String name;
	String home_ph;
	String work_ph;
	String mobile_ph;
	String additional_inf;

public:
	Abonent() = delete;
	Abonent(String name, String home_ph, String work_ph = "none", String mobile_ph = "none", String additional_inf = "none");

public:
	friend std::ostream& operator<< (std::ostream& out, const Abonent&);
	friend class AbonentBook;

};

