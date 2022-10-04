#ifndef INTEIRO_H_INCLUDED
#define INTEIRO_H_INCLUDED
#include <iostream>

class NumeroRacional {

    private:
        int numerador, denominador;
    
    public:
        NumeroRacional() = default;
        NumeroRacional(int numerador, int denominador);

        int getNumerador();
        void setNumerador(int numerador);

        int getDenominador();
        void setDenominador(int denominador);

        NumeroRacional operator+(int n);
        NumeroRacional operator-(int n);
        NumeroRacional operator*(int n);
        NumeroRacional operator/(int n);

        void print();

};

#endif