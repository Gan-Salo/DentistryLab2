#include "dolznost.h"

/*Функция для создания структуры с заранее введенными данными*/
dolznost dl_create()
{
	dolznost data;
	data.title = "Тестовый";
	data.podrazdel = "Пробное подразделение";
	return data;
}

/*Прототип функции для создания структуры с вводимыми пользователем данными*/
dolznost dl_create(string ti, string pod)
{
	dolznost data;
	data.title = ti;
	data.podrazdel = pod;
	return data;
}

/*Функция ввода*/
dolznost dl_get()
{
	dolznost data;
	cout << "_Ввод должности_\n";
	cout << "Введите название должности: ";
	cin >> data.title;
	cout << "\nВведите подразделение: ";
	cin >> data.podrazdel;
	cout << "\n\n";
	return data;
}

/*Функция вывода*/
void dl_view(dolznost a)
{
	cout << "_Должность_\n";
	cout << "Название должности: ";
	cout << a.title;
	cout << " || Подразделение: ";
	cout << a.podrazdel;
	cout << " ||\n\n";
}

/*Пользовательская функция(вывод названия должности)*/
void dolzn_pochet(dolznost a)
{
	cout << a.title << " - очень почетная должность!\n\n";
}