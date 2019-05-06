#include "pch.h"
#include "Human.h"


Human::Human()
{
	surname = "";
	name = "";
	midname = "";
	age = 0;
}
Human::Human(string s, string n, string m, int a)
{
	surname = s;
	name = n;
	midname = m;
	age = a;
}
void Human::Print()
{
	cout << endl << "surname: " << surname << " name: " << name << " midname: " << midname << " age: " << age;
}
Human::~Human()
{
	surname.clear();
	name.clear();
	midname.clear();
}