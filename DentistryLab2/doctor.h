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
	int phone;			//����� ��������
	dolznost title;		//�������� ���������
	string kategory;	//��������� 
};
