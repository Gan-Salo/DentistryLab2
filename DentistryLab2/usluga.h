#include <string>
#include <iostream>

using namespace std;

#pragma once

struct usluga
{
	string title;	//Название услуги
	int cost;	//Стоимость услуги
};

/*Прототипы функций для структуры типа dolznost*/

usluga usl_create();
usluga usl_create(string ti, int co);
usluga usl_get();
void usl_view(usluga a);
void usl_costdollars(usluga a);