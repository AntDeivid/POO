#include <iostream>
#include <cstdlib>

using namespace std;

#include "Tempo.h"

Tempo::Tempo() {

    this->horas = 0;
    this->minutos = 0;
    this->segundos = 0;

}

Tempo::Tempo(int horas, int minutos, int segundos) {

    this->horas = horas;
    this->minutos = minutos;
    this->segundos = segundos;

}

int Tempo::getHoras() {return this->horas;}
void Tempo::setHoras(int novaHora) {this->horas = novaHora;}

int Tempo::getMinutos() {return this->minutos;}
void Tempo::setMinutos(int novoMinuto) {this->minutos = novoMinuto;}

int Tempo::getSegundos() {return this->segundos;}
void Tempo::setSegundos(int novoSegundos) {this->segundos = novoSegundos;}

void Tempo::print() {

    if (this->horas < 10) {
        cout << 0 << horas << ":";
    }
    else {
        cout << horas << ":";
    }

    if (this->minutos < 10) {
        cout << 0 << minutos << ":";
    }
    else {
        cout << minutos << ":";
    }

    if (this->segundos < 10) {
        cout << 0 << segundos;
    }
    else {
        cout << segundos << endl; 
    }

}

void Tempo::subtrair(Tempo *tempo) {

    this->horas = abs(this->horas - tempo->horas);
    this->minutos = abs(this->minutos - tempo->minutos);
    this->segundos = abs(this->segundos - tempo->segundos);

}

void Tempo::somar(Tempo *tempo) {

    this->horas = this->horas + tempo->horas;
    this->minutos = this->minutos + tempo->minutos;
    this->segundos = this->segundos + tempo->segundos;

    if (this->horas == 24) {this->horas = 0;}
    else if (this->horas > 24) {this->horas = this->horas % 24;}

    if (this->minutos > 60) {this->minutos = this->minutos % 60;}

    if (this->segundos > 60) {this->segundos = this->segundos % 60;}

}

Tempo Tempo::somar(Tempo *tempo1, Tempo *tempo2) {

    Tempo *tempoResultado = new Tempo();

    this->setHoras(tempo1->horas + tempo2->horas);
    this->setMinutos(tempo1->minutos + tempo2->minutos);
    this->setSegundos(tempo1->segundos + tempo2->segundos);

    if (this->horas == 24) {this->horas = 0;}
    else if (this->horas > 24) {this->horas = this->horas % 24;}

    if (this->minutos > 60) {this->minutos = this->minutos % 60;}

    if (this->segundos > 60) {this->segundos = this->segundos % 60;}

    return *tempoResultado;

}