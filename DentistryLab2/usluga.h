#include <string>
#include <iostream>

using namespace std;

#pragma once

struct usluga
{
	string title;	//�������� ������
	int cost;	//��������� ������
};

/*��������� ������� ��� ��������� ���� dolznost*/

usluga usl_create();	//�������� ������� ��� �������� ��������� � ������� ���������� �������  
usluga usl_create(string ti, int co);	//�������� ������� ��� �������� ��������� � ��������� ������������� ������� 
usluga usl_get();	//�������� ������� �����
void usl_view(usluga a);	//�������� ������� ������
void usl_costdollars(usluga a);	//�������� ���������������� ������� (����� ���� ������ � �������� (������������� ����))