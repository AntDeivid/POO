#include <iostream>
#include <string>
#include "Caminhao.h"

using namespace std;

Caminhao::Caminhao(int peso, int velocidade, int preco, int cilindros, int potencia, float toneladas, float alturaMaxima, float comprimento) : Veiculo(peso, velocidade, preco), Motor(peso, velocidade, preco, cilindros, potencia) {

    this->toneladas = toneladas;
    this->alturaMaxima = alturaMaxima;
    this->comprimento = comprimento;

}

float Caminhao::getToneladas() {return toneladas;}
void Caminhao::setToneladas(float novaToneladas) {toneladas = novaToneladas;}

float Caminhao::getAlturaMaxima() {return alturaMaxima;}
void Caminhao::setAlturaMaxima(float novaAltura) {alturaMaxima = novaAltura;}

float Caminhao::getComprimento() {return comprimento;}
void Caminhao::setComprimento(float novoComprimento) {comprimento = novoComprimento;}

void Caminhao::printCA() {

    printM();
    cout << "Toneladas: " << getToneladas() << endl;
    cout << "Altura Maxima: " << getAlturaMaxima() << endl;
    cout << "Comprimento: " << getComprimento() << endl;

}