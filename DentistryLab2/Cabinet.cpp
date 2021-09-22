#include "cabinet.h"

cabinet cab_create()
{
	cabinet data;
	data.number = 213;
	data.otdelen = "Пробное отделение";
	data.area = 40;
	return data;
}

cabinet cab_create(int num, string otd, int ar)
{
	cabinet data;
	data.number = num;
	data.otdelen = otd;
	data.area = ar;
	return data;
}

cabinet cab_get()
{
	cabinet data;
	cout << "_Ввод кабинета_\n";
	cout << "Введите номер кабинета: ";
	cin >> data.number;
	cout << "\nВведите отделение: ";
	cin >> data.otdelen;
	cout << "\nВведите площадь кабинета: ";
	cin >> data.area;
	cout << "\n\n";
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

void area_get(cabinet a)
{
	cout << "Площадь кабинета с номером ";
	cout << a.number;
	cout << " равна " << a.area << " кв. метра(ов)\n\n";
}