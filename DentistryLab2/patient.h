#include <string>
#include <iostream>

using namespace std;

#pragma once

struct patient
{
	string fio;		//���
	int age;		//�������
	string phone;		//����� ��������
};

/*��������� ������� ��� ��������� ���� dolznost*/

struct patient pat_create();
struct patient pat_create(string f, int ag, string ph);
void pat_view(patient a);
void pat_present(patient a);