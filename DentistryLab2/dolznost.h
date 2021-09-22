#include <string>
#include <iostream>

using namespace std;

#pragma once

struct dolznost
{
	string title;		//Название должности
	string podrazdel;	//Подразделение, к которому относится должность
}; 

/*Прототипы функций для структуры типа dolznost*/

dolznost dl_create();
dolznost dl_create(string ti, string pod);
dolznost dl_get();
void dl_view(dolznost a);
void dolzn_pochet(dolznost a);