#include <string>
#include "usluga.h"
#include "doctor.h"
#include "patient.h"
#include "cabinet.h"

using namespace std;

#pragma once

struct zapis
{
	usluga uslname;		//Название услуги
	doctor dentist;		//Врач
	patient klient;		//Пациент	
	cabinet cabnum;		//Номер кабинета приёма
	string date;		//Дата и время приема
};

