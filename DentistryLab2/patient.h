#include <string>
#include <iostream>

using namespace std;

#pragma once

struct patient
{
	string fio;		//ФИО
	int age;		//Возраст
	string phone;		//Номер телефона
};

/*Прототипы функций для структуры типа dolznost*/

struct patient pat_create();
struct patient pat_create(string f, int ag, string ph);
void pat_view(patient a);
void pat_present(patient a);