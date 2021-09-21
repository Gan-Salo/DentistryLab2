#include "dolznost.h"

dolznost dl_create()
{
	dolznost data;
	data.title = "Тестовый";
	data.podrazdel = "Пробное подразделение";
	return data;
}

dolznost dl_create(string ti, string pod)
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

void dolzn_pochet(dolznost a)
{
	cout << a.title << " - очень почетная должность!\n\n";
}