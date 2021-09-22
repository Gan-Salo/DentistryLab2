#include "doctor.h"

doctor doc_create()
{
	doctor data;
	data.fio = "Тестовые ФИО";
	data.age = 21;
	data.phone = "+79834041122";

	dolznost data_dolzn;
	data_dolzn.title = "Тестовая должность";
	data_dolzn.podrazdel = "Тестовое подразделение";

	data.kategory = "Тестовая категория";

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
	cout << "_Ввод доктора_\n";
	cout << "Введите ФИО доктора: ";
	cin >> data.fio;
	cout << "\nВведите возраст доктора: ";
	cin >> data.age;
	cout << "\nВведите номер телефона доктора: ";
	cin >> data.phone;
	data.dolzn = dl_get();
	cout << "\nВведите категорию доктора: ";
	cin >> data.kategory;
	cout << "\n\n";
	return data;
}

void doc_view(doctor a)
{
	cout << "_Врач_\n";
	cout << "ФИО врача: ";
	cout << a.fio;
	cout << " || Возраст: ";
	cout << a.age;
	cout << " || Телефон: ";
	cout << a.phone;
	cout << " || Должность: ";
	cout << a.dolzn.title;
	cout << " || Категория: ";
	cout << a.kategory;
	cout << " ||\n\n";
}

void doc_info(doctor a)
{
	cout << "Телефон " << a.phone;
	cout << " принадлежит этому врачу: " << a.fio;
	cout << "\n\n";
}