#include "patient.h"

struct patient pat_create()
{
	patient data;
	data.fio = "�������� ��� ��������";
	data.age = 34;
	data.phone = "+79866044322";
	return data;
}

struct patient pat_create(string f, int ag, string ph)
{
	patient data;
	data.fio = f;
	data.age = ag;
	data.phone = ph;
	return data;
}

void pat_view(patient a)
{
	cout << "_����_\n";
	cout << "��� ��������: ";
	cout << a.fio;
	cout << " || �������: ";
	cout << a.age;
	cout << " || �������: ";
	cout << a.phone;
	cout << " ||\n\n";
}

void pat_present(patient a)
{
	cout << "��������� " << a.fio << ", �������, ��� ����������� �������� ����� ��������! ";
	cout << "����������� ��� � " << a.age << "-�� ��� ��������! ������ ��� ������ ���������!\n\n";
}