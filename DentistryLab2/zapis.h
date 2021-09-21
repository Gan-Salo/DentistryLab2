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

/*Прототипы функций для структуры типа dolznost*/

struct zapis zap_create();
struct zapis zap_create(usluga nam, doctor den, patient kl, cabinet cab, string dat);
void zap_view(zapis a);
void zap_napomin(zapis a);