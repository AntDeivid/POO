#include <iostream>

#include "Inteiro.h"

using namespace std;

NumeroRacional::NumeroRacional(int numerador, int denominador) {

    this->numerador = numerador;
    if (denominador > 0) {
        this->denominador = denominador;
    }
    else {
        this->denominador = 1;
    }

}

int NumeroRacional::getNumerador() { return this->numerador; }
void NumeroRacional::setNumerador(int numerador) { this->numerador = numerador; }

int NumeroRacional::getDenominador() { return this->numerador; }
void NumeroRacional::setDenominador(int denominador) { this->denominador = denominador; }

NumeroRacional NumeroRacional::operator + (int n) {

    NumeroRacional resultado = NumeroRacional();

    if (this->denominador == 1) {

        resultado.numerador = this->numerador + n;
        resultado.denominador = this->denominador;

    }

    else {

        resultado.numerador = (this->numerador * 1) + (this->denominador * n);
        resultado.denominador = this->denominador * 1;

    }

    return resultado;

}

NumeroRacional NumeroRacional::operator - (int n) {

    NumeroRacional resultado = NumeroRacional();

    if (this->denominador == 1) {

        resultado.numerador = this->numerador - n;
        resultado.denominador = this->denominador;

    }

    else {

        resultado.numerador = (this->numerador * 1) - (this->denominador * n);
        resultado.denominador = this->denominador * 1;

    }

    return resultado;

}

NumeroRacional NumeroRacional::operator * (int n){

    NumeroRacional resultado = NumeroRacional();

    resultado.numerador = this->numerador * n;
    resultado.denominador = this->denominador * 1;
    
    return resultado;

}

NumeroRacional NumeroRacional::operator / (int n){

    NumeroRacional resultado = NumeroRacional();

    resultado.numerador = this->numerador * 1;
    resultado.denominador = this->denominador * n;
    
    return resultado;

}

void NumeroRacional::print() {

    cout << "Numerador: " << this->numerador << endl;
    cout << "Denominador: " << this->denominador << endl;

}