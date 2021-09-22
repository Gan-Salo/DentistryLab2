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

	data.dolzn = data_dolzn;
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

doctor doc_get()
{
	doctor data;
	cout << "_���� �������_\n";
	cout << "������� ��� �������: ";
	cin >> data.fio;
	cout << "\n������� ������� �������: ";
	cin >> data.age;
	cout << "\n������� ����� �������� �������: ";
	cin >> data.phone;
	data.dolzn = dl_get();
	cout << "\n������� ��������� �������: ";
	cin >> data.kategory;
	cout << "\n\n";
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

void doc_info(doctor a)
{
	cout << "������� " << a.phone;
	cout << " ����������� ����� �����: " << a.fio;
	cout << "\n\n";
}