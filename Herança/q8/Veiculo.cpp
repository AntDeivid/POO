#include <iostream>
#include <string>
#include "Veiculo.h"

using namespace std;

Veiculo::Veiculo(){}

Veiculo::Veiculo(int peso, int velocidade, int preco) {

    this->peso = peso;
    this->velocidade = velocidade;
    this->preco = preco;

}

int Veiculo::getPeso() {return peso;}
void Veiculo::setPeso(int novoPeso) {peso = novoPeso;}

int Veiculo::getVelocidade() {return velocidade;}
void Veiculo::setVelocidade(int novaVelocidade) {velocidade = novaVelocidade;}

int Veiculo::getPreco() {return preco;}
void Veiculo::setPreco(int novoPreco) {preco = novoPreco;}

void Veiculo::print() {

    cout << "Peso: " << getPeso() << endl;
    cout << "Velocidade: " << getVelocidade() << endl;
    cout << "Preco: " << getPreco() << endl;

}