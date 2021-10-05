#include "patient.h"

/*Функция для создания структуры с заранее введенными данными*/
patient pat_create()
{
	patient data;
	data.fio = "Тестовые ФИО пациента";
	data.age = 34;
	data.phone = "+79866044322";
	return data;
}

/*Прототип функции для создания структуры с вводимыми пользователем данными*/
patient pat_create(string f, int ag, string ph)
{
	patient data;
	data.fio = f;
	data.age = ag;
	data.phone = ph;
	return data;
}

/*Функция ввода*/
patient pat_get()
{
	patient data;
	cout << "_Ввод пациента_\n";
	cout << "Введите ФИО пациента: ";
	cin >> data.fio;
	cout << "\nВведите возраст пациента: ";
	cin >> data.age;
	cout << "\nВведите номер телефона пациента: ";
	cin >> data.phone;
	cout << "\n\n";
	return data;
}

/*Функция вывода*/
void pat_view(patient a)
{
	cout << "_Пациент_\n";
	cout << "ФИО пациента: ";
	cout << a.fio;
	cout << " || Возраст: ";
	cout << a.age;
	cout << " || Телефон: ";
	cout << a.phone;
	cout << " ||\n\n";
}

/*Пользовательская функция (поздравление пациента с Днем рождения)*/
void pat_present(patient a)
{
	cout << "Уважаемый " << a.fio << ", спасибо, что пользуетесь услугами нашей компании! ";
	cout << "Поздравляем вас с " << a.age << "-ым Днём Рождения! Желаем вам почаще улыбаться!\n\n";
}