#include <string>
#include <iostream>
#include "dolznost.h"

using namespace std;

#pragma once

struct doctor
{
	string fio;			//ФИО
	int age;			//Возраст
	string phone;		//Номер телефона
	dolznost dolzn;		//Название должности
	string kategory;	//Категория 
};

/*Прототипы функций для структуры типа dolznost*/

doctor doc_create(); //Прототип функции для создания структуры с заранее введенными данными 
doctor doc_create(string f, int ag, string ph, dolznost tl, string kat);		//Прототип функции для создания структуры с вводимыми пользователем данными 
doctor doc_get();
void doc_view(doctor a);	//Функция вывода структуры с ланными
void doc_info(doctor a);	//Пользовательская функция