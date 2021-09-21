#include "usluga.h"

struct usluga usl_create()
{
	usluga data;
	data.title = "Тестовая услуга";
	data.cost = 700;
	return data;
}

struct usluga usl_create(string ti, int co)
{
	usluga data;
	data.title = ti;
	data.cost = co;
	return data;
}

void usl_view(usluga a)
{
	cout << "_Услуга_\n";
	cout << "Название услуги: ";
	cout << a.title;
	cout << " || Стоимость услуги: ";
	cout << a.cost;
	cout << " ||\n\n";
}

void usl_costdollars(usluga a)
{
	cout << "\nСтоимость услуги с названием '";
	cout << a.title << "': ";
	cout << (a.cost / 75);
	cout << " долларов\n\n";
}