#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once

struct cabinet
{	
	int number;		//����� ��������
	string otdelen;	//���������, � ������� ������ �������
	int area;		//������� ��������
};

/*��������� ������� ��� ��������� ���� cabinet*/

struct cabinet cab_create(); 
struct cabinet cab_create(int num, string otd, int ar);
void cab_view(cabinet a);
void area_get(cabinet a);