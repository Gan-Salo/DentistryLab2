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

zapis zap_create();		//Функция создания 
zapis zap_create(usluga nam, doctor den, patient kl, cabinet cab, string dat);	//Функция создания (с параметрами)
zapis zap_get();	//Функция ввода
void zap_view(zapis a);		//Функция вывода
void zap_napomin(zapis a);	//Пользовательская функция (вывод напоминания о приёме)