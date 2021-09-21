#include "zapis.h"

/*Функция создания*/
zapis zap_create()
{
	zapis data;
	usluga data_usl;
	data_usl.title = "Пломбирование";
	data_usl.cost = 1200;

	doctor data_doc;
	data_doc.fio = "Тестовые ФИО";
	data_doc.age = 21;
	data_doc.phone = "+79834041122";
	dolznost data_dolzn;
	data_dolzn.title = "Тестовая должность";
	data_dolzn.podrazdel = "Тестовое подразделение";

	patient data_kl;
	data_kl.fio = "Тестовые ФИО пациента";
	data_kl.age = 34;
	data_kl.phone = "+79866044322";

	cabinet data_cab;
	data_cab.number = 213;
	data_cab.otdelen = "Пробное отделение";
	data_cab.area = 40;

	data.uslname = data_usl;
	data.dentist = data_doc;
	data.klient = data_kl;
	data.cabnum = data_cab;	
	data.date = "10:30 23.10.2021";

	return data;
}

zapis zap_create(usluga nam, doctor den, patient kl, cabinet cab, string dat)
{
	zapis data;
	data.uslname = nam;
	data.dentist = den;
	data.klient = kl;
	data.cabnum = cab;
	data.date = dat;
	return data;
}

/*Функция вывода*/
void zap_view(zapis a)
{
	cout << "_Запись на прием_\n";
	cout << "Название услуги: ";
	cout << a.uslname.title;
	cout << " || ФИО врача: ";
	cout << a.dentist.fio;
	cout << " || ФИО пациента: ";
	cout << a.klient.fio;
	cout << " || Номер кабинета: ";
	cout << a.cabnum.number;
	cout << " || Дата приема: ";
	cout << a.date;
	cout << " ||\n\n";
}

/*Пользовательская функция*/
void zap_napomin(zapis a)
{
	cout << "Уважаемый " << a.klient.fio << ",";
	cout << "напоминаем вам о том, что " << a.date << " в " << a.cabnum.number;
	cout << " кабинете вам будет оказана следующая услуга: " << a.uslname.title << "\n\n";
}