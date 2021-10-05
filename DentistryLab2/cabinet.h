#include <string>
#include <iostream>

using namespace std;

#pragma once

struct cabinet
{	
	int number;		//Номер кабинета
	string otdelen;	//Отделение, в которое входит кабинет
	int area;		//Площадь кабинета
};

/*Прототипы функций для структуры типа cabinet*/

cabinet cab_create(); //Прототип функции для создания структуры с заранее введенными данными
cabinet cab_create(int num, string otd, int ar); //Прототип функции для создания структуры с вводимыми пользователем данными 
cabinet cab_get();	//Прототип функции ввода
void cab_view(cabinet a);	//Прототип функции вывода	
void area_get(cabinet a);	//Пользовательская функция (вывод площади конкретного кабинета)