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

patient pat_create();
patient pat_create(string f, int ag, string ph);
patient pat_get();
void pat_view(patient a);
void pat_present(patient a);