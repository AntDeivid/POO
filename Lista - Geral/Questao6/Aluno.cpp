#include <iostream>
#include <string>

#include "Aluno.h"

using namespace std;

Aluno::~Aluno() {

    cout << "Objeto foi com Deus" << endl;

}

static int countAlunos = 0;

string Aluno::getNome() {return this->nomeAluno;}
void Aluno::setNome(string novoNome) {
        this->nomeAluno = novoNome;
        countAlunos++;
    }

int Aluno::getSerie() {return this->serieAluno;}
void Aluno::setSerie(int novaSerie) {this->serieAluno = novaSerie;}

string Aluno::getGrau() {return this->grauAluno;}
void Aluno::setGrau(string novoGrau) {this->grauAluno = novoGrau;}

void Aluno::getQuantidadeAlunos() {cout << "O numero de alunos criados eh: " << countAlunos << endl;}