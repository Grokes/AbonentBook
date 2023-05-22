#include "Abonent.h"


Abonent::Abonent(String name, String home_ph, String work_ph, String mobile_ph, String additional_inf) :
																										name{ name }, 
																										home_ph{ home_ph }, 
																										work_ph{ work_ph }, 
																										mobile_ph{ mobile_ph }, 
																										additional_inf{ additional_inf } {};

std::ostream& operator<< (std::ostream& out, const Abonent& abonent)
{
	out << "ФИО: " << abonent.name << std::endl;
	out << "Домашний: " << abonent.home_ph << std::endl;
	out << "Рабочий: " << abonent.work_ph << std::endl;
	out << "Мобильный: " << abonent.mobile_ph << std::endl;
	out << "Примечание: " << abonent.additional_inf << std::endl;
	return out;
}