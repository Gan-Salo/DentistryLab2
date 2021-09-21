#include <string>
#include <iostream>
#include <Windows.h>
#include "dolznost.h"

using namespace std;

#pragma once

struct doctor
{
	string fio;			//ФИО
	int age;			//Возраст
	string phone;			//Номер телефона
	dolznost dolzn;		//Название должности
	string kategory;	//Категория 
};

/*Прототипы функций для структуры типа dolznost*/

struct doctor doc_create();
struct doctor doc_create(string f, int ag, string ph, dolznost tl, string kat);
void doc_view(doctor a);
