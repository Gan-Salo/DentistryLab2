#include "cabinet.h"

struct cabinet cab_create()
{
	cabinet data;
	data.number = 213;
	data.otdelen = "������������� ���������";
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
	cout << "_�������_\n";
	cout << "�����: ";
	cout << a.number;
	cout << " || ���������: ";
	cout << a.otdelen;
	cout << " || �������: ";
	cout << a.area;
	cout << " ||\n\n";
}