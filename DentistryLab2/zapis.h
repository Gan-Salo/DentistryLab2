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

