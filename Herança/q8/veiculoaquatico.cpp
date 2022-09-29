#include <iostream>
#include <string>
#include "veiculoaquatico.h"
using namespace std;

Veiculoaquatico::Veiculoaquatico(int peso, int velocidade, int preco, int tamanho, int motor, string classe){
        this -> classe = classe;
        this -> tamanho = tamanho;
        this -> motor = motor;
}

void Veiculoaquatico::setClasse(string classe){
    this -> classe = classe;
}

string Veiculoaquatico::getClasse(){
    return this -> classe;
}

void Veiculoaquatico::setMotor(int motor){
    this -> motor = motor;
}

int Veiculoaquatico::getMotor(){
    return motor;
}

void Veiculoaquatico::setTamanho(int tamanho){
    this -> tamanho = tamanho;
}

int Veiculoaquatico::getTamanho(){
    return tamanho;
}

void printAQ(){
    cout << "classe: " << getClasse() << endl;
    cout << "motor: " << getMotor() << endl;
    cout << "tamanho: " << getTamanho() << endl;
}