#include <iostream>

using namespace std;

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

        NumeroRacional operator+(NumeroRacional aux);
        NumeroRacional operator-(NumeroRacional aux);
        NumeroRacional operator*(NumeroRacional aux);
        NumeroRacional operator/(NumeroRacional aux);
        NumeroRacional operator<=(NumeroRacional aux);
        NumeroRacional operator>=(NumeroRacional aux);
        bool operator==(NumeroRacional aux);
        bool operator!=(NumeroRacional aux);

        void print();

};