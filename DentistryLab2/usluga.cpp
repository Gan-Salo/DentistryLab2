#include "usluga.h"

/*Функция для создания структуры с заранее введенными данными*/
usluga usl_create()
{
	usluga data;
	data.title = "Тестовая услуга";
	data.cost = 700;
	return data;
}

/*Прототип функции для создания структуры с вводимыми пользователем данными*/
usluga usl_create(string ti, int co)
{
	usluga data;
	data.title = ti;
	data.cost = co;
	return data;
}

/*Функция ввода*/
usluga usl_get()
{
	usluga data;
	cout << "_Ввод услуги_\n";
	cout << "Введите название услуги: ";
	cin >> data.title;
	cout << "\nВведите стоимость услуги: ";
	cin >> data.cost;
	cout << "\n\n";
	return data;
}

/*Функция вывода*/
void usl_view(usluga a)
{
	cout << "_Услуга_\n";
	cout << "Название услуги: ";
	cout << a.title;
	cout << " || Стоимость услуги: ";
	cout << a.cost;
	cout << " ||\n\n";
}

/*Пользовательская функция (вывод цены услуги в долларах(фиксированный курс))*/
void usl_costdollars(usluga a)
{
	cout << "\nСтоимость услуги с названием '";
	cout << a.title << "': ";
	cout << (a.cost / 75);
	cout << " долларов\n\n";
}