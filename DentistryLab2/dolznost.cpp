#include "dolznost.h"

struct dolznost dl_create()
{
	dolznost data;
	data.title = "Тестовый";
	data.podrazdel = "Пробное подразделение";
	return data;
}

struct dolznost dl_create(string ti, string pod)
{
	dolznost data;
	data.title = ti;
	data.podrazdel = pod;
	return data;
}

void dl_view(dolznost a)
{
	cout << "_Должность_\n";
	cout << "Название должности: ";
	cout << a.title;
	cout << " || Подразделение: ";
	cout << a.podrazdel;
	cout << " ||\n\n";
}