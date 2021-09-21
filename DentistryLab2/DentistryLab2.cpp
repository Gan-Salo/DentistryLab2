// DentistryLab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include "usluga.h"
#include "doctor.h"
#include "patient.h"
#include "cabinet.h"
#include "zapis.h"

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

    doctor test1_doc = doc_create();
    doctor test2_doc = doc_create("Авраамов В.С.", 24, "+79832321232", test1_dl, "Высшая");

    doc_view(test1_doc);
    doc_view(test2_doc);

    patient test1_pat = pat_create();
    patient test2_pat = pat_create("Легостаев К.М.", 31, "+79134443315");

    pat_view(test1_pat);
    pat_view(test2_pat);

    zapis test1_zap = zap_create();
    zapis test2_zap = zap_create(test1_usl, test1_doc, test1_pat, test1_cab, "15:10 24.11.2021");

    struct zapis zap_create(usluga nam, doctor den, patient kl, cabinet cab, string dat);

    zap_view(test1_zap);
    zap_view(test2_zap);

    usl_costdollars(test2_usl);

    area_get(test2_cab);

    dolzn_pochet(test2_dl);

    doc_info(test2_doc);

    zap_napomin(test2_zap);

    pat_present(test2_pat);
}
