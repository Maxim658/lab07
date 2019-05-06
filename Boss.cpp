#include "pch.h"
#include "Boss.h"

Boss::Boss()
{
	surname = "";
	name = "";
	midname = "";
	age = 0;
	number_of_workers = 0;
}
Boss::Boss(string s, string n, string m, int a, int workers)
{
	surname = s;
	name = n;
	midname = m;
	age = a;
	number_of_workers = workers;
}
void Boss::Print()
{
	cout << endl << "surname: " << surname << " name: " << name << " midname: " << midname << " age: " << age
		<< " number of workers: " << number_of_workers;
}
Boss::~Boss()
{
	surname.clear();
	name.clear();
	midname.clear();
}
