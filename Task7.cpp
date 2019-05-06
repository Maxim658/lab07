#include "pch.h"
#include <iostream>
#include <string>
#include "Human.h"
#include "Student.h"
#include "Boss.h"
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");

	Human H("Иванов", "Иван", "Иванович", 32);
	Human *h = &H;
	h->Print();

	Student S("Сергеев", "Сергей", "Сергеевич", 24, true);
	Student *s = &S;
	s->Print();

	Boss B("Павелецкий", "Павел", "Павлович", 18, 12);
	Boss *b = &B;
	b->Print();
}
