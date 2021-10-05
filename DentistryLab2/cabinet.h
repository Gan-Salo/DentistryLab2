#include <string>
#include <iostream>

using namespace std;

#pragma once

struct cabinet
{	
	int number;		//����� ��������
	string otdelen;	//���������, � ������� ������ �������
	int area;		//������� ��������
};

/*��������� ������� ��� ��������� ���� cabinet*/

cabinet cab_create(); //�������� ������� ��� �������� ��������� � ������� ���������� �������
cabinet cab_create(int num, string otd, int ar); //�������� ������� ��� �������� ��������� � ��������� ������������� ������� 
cabinet cab_get();	//�������� ������� �����
void cab_view(cabinet a);	//�������� ������� ������	
void area_get(cabinet a);	//���������������� ������� (����� ������� ����������� ��������)