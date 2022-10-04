#include <iostream>
#include "Tempo.h"

using namespace std;

int main() {

    Tempo *tempo1 = new Tempo(21, 47, 59);
    Tempo *tempo2 = new Tempo(18, 43, 43);

    tempo1->print();

    tempo1->subtrair(tempo2);

    tempo1->print();

    tempo1->somar(tempo2->getHoras(), tempo2->getMinutos(), tempo2->getSegundos());

    tempo1->print();

    tempo1->somar(tempo2);

    return 0;

}