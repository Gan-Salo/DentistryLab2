#include "cabinet.h"

struct cabinet cab_create()
{
	cabinet data;
	data.number = 213;
	data.otdelen = "Хирургическое отделение";
	data.area = 40;
	return data;
}

struct cabinet cab_create(int num, string otd, int ar)
{
	cabinet data;
	data.number = num;
	data.otdelen = otd;
	data.area = ar;
	return data;
}

void cab_view(cabinet a)
{
	cout << "_Кабинет_\n";
	cout << "Номер: ";
	cout << a.number;
	cout << " || Отделение: ";
	cout << a.otdelen;
	cout << " || Площадь: ";
	cout << a.area;
	cout << " ||\n\n";
}