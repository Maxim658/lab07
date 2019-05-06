#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human();
	Human(string s, string n, string m, int a);
	virtual void Print();
	~Human();
};