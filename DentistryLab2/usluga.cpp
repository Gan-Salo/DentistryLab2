#include "usluga.h"

struct usluga usl_create()
{
	usluga data;
	data.title = "�������� ������";
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
	cout << "_�������_\n";
	cout << "�������� ������: ";
	cout << a.title;
	cout << " || ��������� ������: ";
	cout << a.cost;
	cout << " ||\n\n";
}