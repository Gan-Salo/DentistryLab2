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

patient pat_create();	//Прототип функции для создания структуры с заранее введенными данными  
patient pat_create(string f, int ag, string ph);	//Прототип функции для создания структуры с вводимыми пользователем данными 
patient pat_get();		//Прототип функции ввода
void pat_view(patient a);		//Прототип функции вывода
void pat_present(patient a);	//Прототип пользовательской функции (поздравление пациента с Днем рождения)