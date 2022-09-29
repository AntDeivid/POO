#include <iostream>
#include "Conta.h"

using namespace std;

Conta::Conta() {}

Conta::Conta(double saldoConta) {

    if (saldoConta >= 0) {

        cout << "-------------------------------------------------" << endl;

        this->saldoConta = saldoConta;
        cout << "Conta criada com saldo " << saldoConta << endl;

        cout << "-------------------------------------------------" << endl;

    }

    else {

        cout << "-------------------------------------------------" << endl;

        this->saldoConta = 0;

        cout << "ERRO!" << endl << "Nao é possivel criar uma conta com saldo negativo. A conta foi criada com saldo 0" << endl;

        cout << "-------------------------------------------------" << endl;
    }

}

void Conta::credito(double valor) {

    cout << "-------------------------------------------------" << endl;

    cout << "Saldo anterior: " << saldoConta << endl;
    saldoConta += valor;
    cout << getSaldo() << endl;
    cout << "-------------------------------------------------" << endl;
}

void Conta::debito(double valor) {

    cout << "-------------------------------------------------" << endl;

    if (valor > saldoConta) {

        cout << "A operacao nao pode ser realizada. O valor a ser debitado eh maior que o saldo em conta." << endl;
        cout << getSaldo() << endl;
        return;

    }

    else {

        cout << "Saldo anterior: " << saldoConta << endl;
        saldoConta -= valor;
        cout << getSaldo() << endl;

    }

    cout << "-------------------------------------------------" << endl;

}

double Conta::getSaldo() {

    cout << "-------------------------------------------------" << endl;

    cout << "Saldo atual: ";
    return saldoConta;
    cout << "-------------------------------------------------" << endl;


}