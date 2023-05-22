#include "Abonent.h"


Abonent::Abonent(String name, String home_ph, String work_ph, String mobile_ph, String additional_inf) :
																										name{ name }, 
																										home_ph{ home_ph }, 
																										work_ph{ work_ph }, 
																										mobile_ph{ mobile_ph }, 
																										additional_inf{ additional_inf } {};

std::ostream& operator<< (std::ostream& out, const Abonent& abonent)
{
	out << "���: " << abonent.name << std::endl;
	out << "��������: " << abonent.home_ph << std::endl;
	out << "�������: " << abonent.work_ph << std::endl;
	out << "���������: " << abonent.mobile_ph << std::endl;
	out << "����������: " << abonent.additional_inf << std::endl;
	return out;
}