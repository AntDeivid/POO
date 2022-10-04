#include <iostream>
#include <string>

#include "Estacionamento.h"

using namespace std;

Estacionamento::Estacionamento(string placa, string modelo) {

    this->placa = placa;
    this->modelo = modelo;

}

string Estacionamento::getPlaca() {return this->placa;}
void Estacionamento::setPlaca(string placa) {this->placa = placa;}

string Estacionamento::getModelo() {return this->modelo;}
void Estacionamento::setModelo(string modelo) {this->modelo = modelo;}

double Estacionamento::custoTotal(int horas) {

    return horas * 1.5;

}

void Estacionamento::print() {

    cout << "Placa: " << this->getPlaca() << endl;
    cout << "Modelo: " << this->getModelo() << endl;

}