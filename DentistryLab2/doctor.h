#include <string>
#include <iostream>
#include "dolznost.h"

using namespace std;

#pragma once

struct doctor
{
	string fio;			//���
	int age;			//�������
	string phone;		//����� ��������
	dolznost dolzn;		//�������� ���������
	string kategory;	//��������� 
};

/*��������� ������� ��� ��������� ���� dolznost*/

doctor doc_create(); //�������� ������� ��� �������� ��������� � ������� ���������� ������� 
doctor doc_create(string f, int ag, string ph, dolznost tl, string kat);		//�������� ������� ��� �������� ��������� � ��������� ������������� ������� 
doctor doc_get();	//�������� ������� �����
void doc_view(doctor a);	//�������� ������� ������
void doc_info(doctor a);	//�������� ���������������� ������� (����� ������ �������� ������������� �����)