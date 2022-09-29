#include <iostream>
#include <string>

#include "Data.h"

using namespace std;

Data::Data(int dia, int mes, int ano) {

    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12)) {

        this->dia = dia;
        this->mes = mes;
        this->ano = ano;

    }

    else {

        cout << "Data invalida!" << endl;

    }

}

int Data::getDia() {return this->dia;}
void Data::setDia(int dia) {this->dia = dia;}

int Data::getMes() {return this->mes;}
void Data::setMes(int mes) {this->mes = mes;}

int Data::getAno() {return this->ano;}
void Data::setAno(int ano) {this->ano = ano;}

void Data::printData() {

    cout << getDia() << "/" << getMes() << "/" << getAno() << endl;

}

int Data::quantidadeDias(int mes) {

    int count = 0;

    for (int i = 0; i < mes; i++) {

        if (i % 2 == 0) {

            count += 30;

        }

        else {

            count += 31;

        }

    }

    return count;

}

int Data::quantidadeDias(string mes) {

    int count = 0;
    int control = 0;

    if (mes == "janeiro") {
        control = 1;
    }
    else if (mes == "fevereiro") {
        control = 2;
    }
    else if (mes == "marco") {
        control = 3;
    }
    else if (mes == "abril") {
        control = 4;
    }
    else if (mes == "maio") {
        control = 5;
    }
    else if (mes == "junho") {
        control = 6;
    }
    else if (mes == "julho") {
        control = 7;
    }
    else if (mes == "agosto") {
        control = 8;
    }
    else if (mes == "setembro") {
        control = 9;
    }
    else if (mes == "outubro") {
        control = 10;
    }
    else if (mes == "novembro") {
        control = 11;
    }
    else if (mes == "dezembro") {
        control = 12;
    }

    for (int i = 0; i < control; i++) {
        if (i % 2 == 0) {
            count += 30;
        }
        else {
            count += 31;
        }
    }

    return count;

}

