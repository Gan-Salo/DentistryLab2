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

usluga usl_create();	//Прототип функции для создания структуры с заранее введенными данными  
usluga usl_create(string ti, int co);	//Прототип функции для создания структуры с вводимыми пользователем данными 
usluga usl_get();	//Прототип функции ввода
void usl_view(usluga a);	//Прототип функции вывода
void usl_costdollars(usluga a);	//Прототип пользовательской функции (вывод цены услуги в долларах (фиксированный курс))