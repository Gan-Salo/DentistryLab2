#include <string>
#include <iostream>
#include <Windows.h>
#include "dolznost.h"

using namespace std;

#pragma once

struct doctor
{
	string fio;			//���
	int age;			//�������
	string phone;			//����� ��������
	dolznost dolzn;		//�������� ���������
	string kategory;	//��������� 
};

/*��������� ������� ��� ��������� ���� dolznost*/

struct doctor doc_create();
struct doctor doc_create(string f, int ag, string ph, dolznost tl, string kat);
void doc_view(doctor a);
