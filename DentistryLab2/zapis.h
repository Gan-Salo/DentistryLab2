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

struct zapis zap_create();
struct zapis zap_create(usluga nam, doctor den, patient kl, cabinet cab, string dat);
void zap_view(zapis a);
void zap_napomin(zapis a);