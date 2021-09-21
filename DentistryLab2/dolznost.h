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


struct dolznost dl_create();
struct dolznost dl_create(int num, string otd, int ar);
void dl_view(dolznost a);