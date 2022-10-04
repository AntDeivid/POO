#include <iostream>

#include "NumeroRacional.h"

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

NumeroRacional NumeroRacional::operator + (NumeroRacional aux) {

    NumeroRacional resultado = NumeroRacional();

    if (this->denominador == aux.denominador) {

        resultado.numerador = this->numerador + aux.numerador;
        resultado.denominador = this->denominador;

    }

    else {

        resultado.numerador = (this->numerador * aux.denominador) + (this->denominador * aux.numerador);
        resultado.denominador = this->denominador * aux.denominador;

    }

    return resultado;

}

NumeroRacional NumeroRacional::operator - (NumeroRacional aux) {

    NumeroRacional resultado = NumeroRacional();

    if (this->denominador == aux.denominador) {

        resultado.numerador = this->numerador - aux.numerador;
        resultado.denominador = this->denominador;

    }

    else {

        resultado.numerador = (this->numerador * aux.denominador) - (this->denominador * aux.numerador);
        resultado.denominador = this->denominador * aux.denominador;

    }

    return resultado;

}

NumeroRacional NumeroRacional::operator * (NumeroRacional aux){

    NumeroRacional resultado = NumeroRacional();

    resultado.numerador = this->numerador * aux.numerador;
    resultado.denominador = this->denominador * aux.denominador;
    
    return resultado;

}

NumeroRacional NumeroRacional::operator / (NumeroRacional aux){

    NumeroRacional resultado = NumeroRacional();

    resultado.numerador = this->numerador * aux.denominador;
    resultado.denominador = this->denominador * aux.numerador;
    
    return resultado;

}

NumeroRacional NumeroRacional::operator <= (NumeroRacional aux){

    NumeroRacional auxiliar = NumeroRacional(this->getNumerador(), this->getDenominador());

    if ((this->numerador / this->denominador) <= (aux.numerador / aux.denominador)) { return auxiliar; }
    else { return aux; }

}

NumeroRacional NumeroRacional::operator >= (NumeroRacional aux){

    NumeroRacional auxiliar = NumeroRacional(this->getNumerador(), this->getDenominador());

    if ((this->numerador / this->denominador) >= (aux.numerador / aux.denominador)) { return auxiliar; }
    else { return aux; }

}

bool NumeroRacional::operator == (NumeroRacional aux){

    if ((this->numerador / this->denominador) == (aux.numerador / aux.denominador)) { return true; }
    else { return false; }

}

bool NumeroRacional::operator != (NumeroRacional aux){

    if ((this->numerador / this->denominador) != (aux.numerador / aux.denominador)) { return true; }
    else { return false; }

}

void NumeroRacional::print() {

    cout << "Numerador: " << this->numerador << endl;
    cout << "Denominador: " << this->denominador << endl;

}