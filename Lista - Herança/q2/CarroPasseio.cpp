#include <iostream>
#include <string>
#include "CarroPasseio.h"

using namespace std;

CarroPasseio::CarroPasseio(){}

CarroPasseio::CarroPasseio(int peso, int velocidade, int preco, int cilindros, int potencia, string modelo, string cor) : Veiculo(peso, velocidade, preco), Motor(peso, velocidade, preco, cilindros, potencia) {

    this->modelo = modelo;
    this->cor = cor;

}

string CarroPasseio::getModelo() {return modelo;}
void CarroPasseio::setModelo(string novoModelo) {modelo = novoModelo;}

string CarroPasseio::getCor() {return cor;}
void CarroPasseio::setCor(string novaCor) {cor = novaCor;}

CarroPasseio::printCP() {

    printM();
    cout << "Modelo: " << getModelo() << endl;
    cout << "Cor: " << getCor() << endl;

}