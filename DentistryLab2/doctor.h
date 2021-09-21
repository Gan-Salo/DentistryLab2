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
	int phone;			//Номер телефона
	dolznost title;		//Название должности
	string kategory;	//Категория 
};
