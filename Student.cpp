#include "pch.h"
#include "Student.h"


Student::Student()
{
	surname = "";
	name = "";
	midname = "";
	age = 0;
	on_lesson = false;
}
Student::Student(string s, string n, string m, int a, bool les)
{
	surname = s;
	name = n;
	midname = m;
	age = a;
	on_lesson = les;
}
void Student::Print()
{
	cout << endl << "surname: " << surname << " name: " << name << " midname: " << midname << " age: " << age
		<< " on lesson: " << on_lesson;
}
Student::~Student()
{
	surname.clear();
	name.clear();
	midname.clear();
}