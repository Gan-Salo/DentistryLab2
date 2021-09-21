#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once

struct cabinet
{	
	int number;		//Номер кабинета
	string otdelen;	//Отделение, в которое входит кабинет
	int area;		//Площадь кабинета
};

/*Прототипы функций для структуры типа cabinet*/

struct cabinet cab_create(); 
struct cabinet cab_create(int num, string otd, int ar);
void cab_view(cabinet a);
void area_get(cabinet a);