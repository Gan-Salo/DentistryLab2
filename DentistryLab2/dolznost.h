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

dolznost dl_create();	//Функция создания 
dolznost dl_create(string ti, string pod);	//Функция создания (с параметрами)
dolznost dl_get();	//Функция ввода
void dl_view(dolznost a);	//Функция вывода
void dolzn_pochet(dolznost a); //Прототип пользовательской функции (вывод названия должности)