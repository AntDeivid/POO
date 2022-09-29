#include <iostream>
#include "Conta.h"

using namespace std;

int main() {

    cout << "############################################################" << endl;
    cout << "Conta 1" << endl;
    Conta *conta1 = new Conta(100);
    cout << "Conta 2" << endl;
    Conta *conta2 = new Conta(200);

    cout << "############################################################" << endl;
    cout << "Conta 1" << endl;
    conta1->credito(50);
    cout << "Conta 2" << endl;
    conta2->credito(50);

    cout << "############################################################" << endl;
    cout << "Conta 1" << endl;
    conta1->debito(50);
    cout << "Conta 2" << endl;
    conta2->debito(50);

    cout << "############################################################" << endl;
    cout << "Conta 1" << endl;
    conta1->getSaldo();
    cout << "Conta 2" << endl;
    conta2->getSaldo();

    return 0;

}