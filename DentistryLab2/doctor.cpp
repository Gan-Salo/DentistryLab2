#include "doctor.h"

doctor doc_create()
{
	doctor data;
	data.fio = "�������� ���";
	data.age = 21;
	data.phone = "+79834041122";

	dolznost data_dolzn;
	data_dolzn.title = "�������� ���������";
	data_dolzn.podrazdel = "�������� �������������";

	data.kategory = "�������� ���������";
	return data;
}

doctor doc_create(string f, int ag, string ph, dolznost dl, string kat)
{
	doctor data;
	data.fio = f;
	data.age = ag;
	data.phone = ph;
	data.dolzn = dl;
	data.kategory = kat;
	return data;
}

void doc_view(doctor a)
{
	cout << "_����_\n";
	cout << "��� �����: ";
	cout << a.fio;
	cout << " || �������: ";
	cout << a.age;
	cout << " || �������: ";
	cout << a.phone;
	cout << " || ���������: ";
	cout << a.dolzn.title;
	cout << " || ���������: ";
	cout << a.kategory;
	cout << " ||\n\n";
}