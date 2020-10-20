#pragma once
#include <string>
#include <cstring>
#include "BData.h"

using namespace std;

class Student
{
public:
	Student();
	~Student();
protected:
	BData Birthday;
public:
	void SetBirthday(int day, int month, int year);
protected:
	string surname;
	string name;
	string patronymic;
public:
	void SetSurame(string Surname);
	void SetName(string Name);
	void SetPatronymic(string Patronymic);
};

