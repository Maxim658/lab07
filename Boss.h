#pragma once
#include "Human.h"

class Boss :public Human
{
protected:
	int number_of_workers;
public:
	Boss();
	Boss(string s, string n, string m, int a, int workers);
	void Print();
	~Boss();
};
