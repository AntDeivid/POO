#include <iostream>

#include "NumeroRacional.h"

using namespace std;

int main() {

    NumeroRacional num1;
    num1.setNumerador(10);
    num1.setDenominador(2);
    NumeroRacional num2;
    num2.setNumerador(30);
    num2.setDenominador(2);
    NumeroRacional num3;

    num3 = num1 + num2;

    num3.print();

    return 0;

}   