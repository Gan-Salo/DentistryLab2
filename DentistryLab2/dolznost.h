#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once

struct dolznost
{
	string title;		//Название должности
	string podrazdel;	//Подразделение, к которому относится должность
}; 

/*Прототипы функций для структуры типа dolznost*/

struct dolznost dl_create();
struct dolznost dl_create(string ti, string pod);
void dl_view(dolznost a);