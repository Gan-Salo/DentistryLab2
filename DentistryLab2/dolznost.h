#include <string>
#include <iostream>

using namespace std;

#pragma once

struct dolznost
{
	string title;		//�������� ���������
	string podrazdel;	//�������������, � �������� ��������� ���������
}; 

/*��������� ������� ��� ��������� ���� dolznost*/

dolznost dl_create();	//������� �������� 
dolznost dl_create(string ti, string pod);	//������� �������� (� �����������)
dolznost dl_get();	//������� �����
void dl_view(dolznost a);	//������� ������
void dolzn_pochet(dolznost a); //�������� ���������������� ������� (����� �������� ���������)