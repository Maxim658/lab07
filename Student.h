#pragma once
#include "Human.h"

class Student :public Human
{
protected:
	bool on_lesson;
public:
	Student();
	Student(string s, string n, string m, int a, bool les);
	void Print();
	~Student();
};
