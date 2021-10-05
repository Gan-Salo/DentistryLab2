#include "usluga.h"

/*������� ��� �������� ��������� � ������� ���������� �������*/
usluga usl_create()
{
	usluga data;
	data.title = "�������� ������";
	data.cost = 700;
	return data;
}

/*�������� ������� ��� �������� ��������� � ��������� ������������� �������*/
usluga usl_create(string ti, int co)
{
	usluga data;
	data.title = ti;
	data.cost = co;
	return data;
}

/*������� �����*/
usluga usl_get()
{
	usluga data;
	cout << "_���� ������_\n";
	cout << "������� �������� ������: ";
	cin >> data.title;
	cout << "\n������� ��������� ������: ";
	cin >> data.cost;
	cout << "\n\n";
	return data;
}

/*������� ������*/
void usl_view(usluga a)
{
	cout << "_������_\n";
	cout << "�������� ������: ";
	cout << a.title;
	cout << " || ��������� ������: ";
	cout << a.cost;
	cout << " ||\n\n";
}

/*���������������� ������� (����� ���� ������ � ��������(������������� ����))*/
void usl_costdollars(usluga a)
{
	cout << "\n��������� ������ � ��������� '";
	cout << a.title << "': ";
	cout << (a.cost / 75);
	cout << " ��������\n\n";
}