#include "String.h"

String::String(const char* const arg_str) : size(strlen(arg_str))
{
	this->CopyStr(arg_str);
	++count;
}

std::ostream& operator<< (std::ostream& out, const String& string)
{
	out << string.str;
	return out;
}

std::istream& operator>> (std::istream& input, String& string)
{
	delete[] string.str;
	
	char temp_str[MAXLEN]{};
	input.getline(temp_str, MAXLEN);
	string.size = strlen(temp_str);

	string.CopyStr(temp_str);
	
	return input;
}


void String::CopyStr(const char* const arg_str)
{
	str = new char[size + 1] {};
	for (int i{}; i < size; ++i)
		str[i] = arg_str[i];
	str[size] = '\0';
}

bool String::operator== (const String& arg) const
{
	if (this->size != arg.size)
		return false;
	for (int i{}; i < size; ++i)
	{
		if (*(this->str + i) != *(arg.str + i))
			return false;
	}
	return true;
}