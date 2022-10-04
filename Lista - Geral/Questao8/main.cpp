#include <iostream>
#include <string>

#include "Estacionamento.h"
#include "Tempo.h"

using namespace std;

int main() {

    Estacionamento *carro1 = new Estacionamento("PCSX2", "GOW2");
    Tempo *tempoEntrada = new Tempo(19, 43, 21);
    Tempo *tempoSaida = new Tempo(23, 35, 53);

    Tempo *tempoAux = new Tempo();

    tempoAux = tempoEntrada;

    tempoAux->subtrair(tempoSaida);

    carro1->print();
    cout << "Custo total: " << carro1->custoTotal(tempoAux->getHoras()) << endl;

    return 0;

}