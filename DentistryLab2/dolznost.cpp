#include "dolznost.h"

dolznost dl_create()
{
	dolznost data;
	data.title = "��������";
	data.podrazdel = "������� �������������";
	return data;
}

dolznost dl_create(string ti, string pod)
{
	dolznost data;
	data.title = ti;
	data.podrazdel = pod;
	return data;
}

dolznost dl_get()
{
	dolznost data;
	cout << "_���� ���������_\n";
	cout << "������� �������� ���������: ";
	cin >> data.title;
	cout << "\n������� �������������: ";
	cin >> data.podrazdel;
	cout << "\n\n";
	return data;
}

void dl_view(dolznost a)
{
	cout << "_���������_\n";
	cout << "�������� ���������: ";
	cout << a.title;
	cout << " || �������������: ";
	cout << a.podrazdel;
	cout << " ||\n\n";
}

void dolzn_pochet(dolznost a)
{
	cout << a.title << " - ����� �������� ���������!\n\n";
}