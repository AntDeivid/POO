#include <iostream>
#include <string>
#include "Motor.h"

using namespace std;

Motor::Motor() {}

Motor::Motor(int peso, int velocidade, int preco, int cilindros, int potencia) : Veiculo(peso, velocidade, preco) {

    this->cilindros = cilindros;
    this->potencia = potencia;

}

int Motor::getCilindros() {return cilindros;}
void Motor::setCilindros(int novoCilindro) {cilindros = novoCilindro;}

int Motor::getPotencia() {return potencia;}
void Motor::setPotencia(int novaPotencia) {potencia = novaPotencia;}

void Motor::printM() {

    print();
    cout << "Cilindros: " << getCilindros() << endl;
    cout << "Potencia: " << getPotencia() << endl;

}