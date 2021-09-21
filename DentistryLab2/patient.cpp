#include "patient.h"

struct patient pat_create()
{
	patient data;
	data.fio = "Тестовые ФИО пациента";
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
	cout << "_Врач_\n";
	cout << "ФИО пациента: ";
	cout << a.fio;
	cout << " || Возраст: ";
	cout << a.age;
	cout << " || Телефон: ";
	cout << a.phone;
	cout << " ||\n\n";
}

void pat_present(patient a)
{
	cout << "Уважаемый " << a.fio << ", спасибо, что пользуетесь услугами нашей компании! ";
	cout << "Поздравляем вас с " << a.age << "-ым Днём Рождения! Желаем вам почаще улыбаться!\n\n";
}