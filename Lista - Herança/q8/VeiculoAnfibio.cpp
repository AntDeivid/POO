#include <iostream>
#include <string>
#include "VeiculoAnfibio.h"
using namespace std;

VeiculoAnfibio::VeiculoAnfibio (int peso, int velocidade, int preco, int cilindros, int potencia, int tamanhoPneu, int tamanho, int motor, string classe){
    this -> cor = cor;
    this -> roda = roda;
    this -> placa = placa;
}

string VeiculoAnfibio::getCor() {return cor;}
void VeiculoAnfibio::setCor(int novaCor) {cor = novaCor;}

string VeiculoAnfibio::getRodas() {return roda;}
void VeiculoAnfibio::setRodas(int novaRodas) {roda = roda;}

int VeiculoAnfibio::getPlaca() {return preco;}
void Veiculo::setPlaca(int novaPlaca) {placa = novaPlaca;}

void printAll() {

    print();
    printT();
    printAQ();

    cout << "Cor: " << getCor() << endl;
    cout << "Numero de Rodas: " << getRodas() << endl;
    cout << "Placa: " << getPlaca() << endl;

}