#include <iostream>
#include "Inteiro.h"

using namespace std;

int main() {

    NumeroRacional num1;
    num1.setNumerador(10);
    num1.setDenominador(2);

    NumeroRacional num3;

    num3 = num1 + 5;

    num3.print();

    return 0;

}   