#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

#pragma once

struct dolznost
{
	string title;		//�������� ���������
	string podrazdel;	//�������������, � �������� ��������� ���������
}; 

/*��������� ������� ��� ��������� ���� dolznost*/

struct dolznost dl_create();
struct dolznost dl_create(string ti, string pod);
void dl_view(dolznost a);