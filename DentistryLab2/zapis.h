#include <string>
#include "usluga.h"
#include "doctor.h"
#include "patient.h"
#include "cabinet.h"

using namespace std;

#pragma once

struct zapis
{
	usluga uslname;		//�������� ������
	doctor dentist;		//����
	patient klient;		//�������	
	cabinet cabnum;		//����� �������� �����
	string date;		//���� � ����� ������
};

/*��������� ������� ��� ��������� ���� dolznost*/

zapis zap_create();		//������� �������� 
zapis zap_create(usluga nam, doctor den, patient kl, cabinet cab, string dat);	//������� �������� (� �����������)
zapis zap_get();	//������� �����
void zap_view(zapis a);		//������� ������
void zap_napomin(zapis a);	//���������������� ������� (����� ����������� � �����)