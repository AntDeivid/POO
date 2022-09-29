#include <iostream>
#include <string>
#include "VeiculoTerrestre.h"

using namespace std;

//VeiculoTerrestre::VeiculoTerrestre() {}

VeiculoTerrestre::VeiculoTerrestre(int peso, int velocidade, int preco, int cilindros, int potencia, int tamanhoPneu) : Veiculo(peso, velocidade, preco) {

    this->cilindros = cilindros;
    this->potencia = potencia;
    this->tamanhoPneu = tamanhoPneu;

}

int VeiculoTerrestre::getCilindros() {return cilindros;}
void VeiculoTerrestre::setCilindros(int novoCilindro) {cilindros = novoCilindro;}

int VeiculoTerrestre::getPotencia() {return potencia;}
void VeiculoTerrestre::setPotencia(int novaPotencia) {potencia = novaPotencia;}

int VeiculoTerrestre::getTamanhoPneu() {return tamanhoPneu;}
void VeiculoTerrestre::setTamanhoPneu(int novoTamanho) {tamanhoPneu = novoTamanho;}

void VeiculoTerrestre::printT() {

    //print();
    cout << "Cilindros: " << getCilindros() << endl;
    cout << "Potencia: " << getPotencia() << endl;
    cout << "Tamanho do pneu: " << getTamanhoPneu() << endl;

}