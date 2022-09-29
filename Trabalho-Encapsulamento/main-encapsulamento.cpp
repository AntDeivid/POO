/**
 * @file main-encapsulamento.cpp
 * @author Antonio Deivid Santos Costa e João Pedro Soares Matias
 * @brief 
 * @version 0.1
 * @date 2022-08-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

class Mercado {

    private:
        int quantidade, lucro;
        string tipo;
        string nome;

    public:
        Mercado(string t, string n, int q, int l);
        void imprimir();
        void porte(int l);

        int getQuantidade();
        void setQuantidade(int novaQuantidade);

        int getLucro();
        void setLucro(int novoLucro);

        string getTipo();
        void setTipo(string novoTipo);

        string getNome();
        void setNome(string novoNome);

};

Mercado::Mercado(string t, string n, int q, int l) {

    tipo = t;
    nome = n;
    quantidade = q;
    lucro = l;

}

void Mercado::porte(int l) {

    if ( l == 1  ) {

        cout << "Pequeno porte" << endl;

    }

    else if ( l == 2) {

        cout << "Médio porte" << endl;

    }

    else {

        cout << "Grande Porte" << endl;

    }

}

void Mercado::imprimir() {

    cout << nome << endl;
    cout << tipo << endl;
    cout << quantidade << endl;
    cout << lucro << endl;

}

//Quantidade
int Mercado::getQuantidade() {

    return quantidade;

}

void Mercado::setQuantidade(int novaQuantidade) {

    quantidade = novaQuantidade;

}

//Lucro
int Mercado::getLucro() {

    return lucro;

}

void Mercado::setLucro(int novoLucro) {

    lucro = novoLucro;

}

//Tipo
string Mercado::getTipo() {

    return tipo;

}

void Mercado::setTipo(string novoTipo) {

    tipo = novoTipo;

}

//Nome
string Mercado::getNome() {

    return nome;

}

void Mercado::setNome(string novoNome) {

    nome = novoNome;

}

int main() {

    Mercado *empresa1 = new Mercado("Carne", "Ubuntu", 3, 3);
    Mercado *empresa2 = new Mercado("Material", "Amanco", 2, 1);

    empresa1->imprimir();
    empresa1->porte(empresa1->getLucro());
    cout << "-------------------------------" << endl;
    empresa2->imprimir();
    empresa2->porte(empresa2->getLucro());


    return 0;

}