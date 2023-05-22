#pragma once
#include <iostream>
#define MAXLEN 256
class String
{
private:
	char* str;
	unsigned int size{};
	static int count;

public:
	String() :String(80) {}
	String(const unsigned int& size) :str{ new char[size] {} }, size{ size } { ++count; }
	String(const char* const arg_str);
	String(const String& copy) : String(copy.size + 1)
	{
		--size;
		for (int i{}; i < size; ++i) this->str[i] = copy.str[i];
		this->str[size] = '\0';
	}

	~String() { delete[] str; --count; size = 0; }

public:
	friend std::ostream& operator<< (std::ostream& out, const String& string);
	friend std::istream& operator>> (std::istream& input, String& string);
	bool operator== (const String& arg_str) const;
	static int GetCount() { return count; }
	unsigned int GetSize() { return size; }
	char* getPointer() const{ return str; } 
	unsigned int getSize() const{ return size; }
	void setPointer(char* arg) { str = arg; }
	void setSize(unsigned int arg) { size = arg; }

private:
	void CopyStr(const char* const arg_str);

};
