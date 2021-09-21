// DentistryLab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "usluga.h"
#include "doctor.h"
#include "patient.h"
#include "cabinet.h"

using namespace std;

int main()
{     
    setlocale(LC_ALL, "Russian");

    cabinet test1_cab = cab_create();
    cabinet test2_cab = cab_create(123, "Отделение №1", 23);

    cab_view(test1_cab);
    cab_view(test2_cab);

    dolznost test1_dl = dl_create();
    dolznost test2_dl = dl_create("Стоматолог-Терапевт", "Стоматологи");
    
    dl_view(test1_dl);
    dl_view(test2_dl);

    usluga test1_usl = usl_create();
    usluga test2_usl = usl_create("Чистка зубов", 800);

    usl_view(test1_usl);
    usl_view(test2_usl);
}
