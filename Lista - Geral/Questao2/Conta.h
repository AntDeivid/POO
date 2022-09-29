#include <iostream>

using namespace std;

class Conta {

    private:
        double saldoConta;

    public:
        Conta();
        Conta(double saldoConta);

        void credito(double valor);
        void debito(double valor);
        double getSaldo();

};