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

    num3 = num1 - num2;
    num3.print();

    num3 = num1 * num2;
    num3.print();

    num3 = num1 / num2;
    num3.print();

    if (num3 >= num1) {cout << "Sim" << endl; }
    else { cout << "Nao" << endl; }

    if (num3 <= num1) { cout << "Sim" << endl; }
    else { cout << "Nao" << endl; }

    if (num3 == num1) { cout << "Sim" << endl; }
    else { cout << "Nao" << endl; }

    if (num3!= num1) { cout << "Sim" << endl; }
    else { cout << "Nao" << endl; }

    return 0;

}   