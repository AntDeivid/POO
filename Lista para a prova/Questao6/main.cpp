#include <iostream>
#include <string>

#include "Aluno.h"

using namespace std;

int main() {

    Aluno alunos[15];

    for (int i = 0; i < 15; i++) {

        int auxI;
        string aux = " ";
        cin >> aux;
        alunos[i].setNome(aux);
        cin >> auxI;
        cin.ignore();
        alunos[i].setSerie(auxI);
        cin >> aux;
        alunos[i].setGrau(aux);
    }

    alunos[0].getQuantidadeAlunos();

    return 0;

}