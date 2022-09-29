#include <iostream>
#include "Tempo.h"

using namespace std;

int main() {

    Tempo *tempo1 = new Tempo(21, 47, 59);
    Tempo *tempo2 = new Tempo(18, 43, 43);

    tempo1->print();

    tempo1->subtrair(tempo2);

    tempo1->print();

    tempo1->somar(tempo2);

    tempo1->print();

    Tempo *tempo3 = tempo3->somar(tempo1, tempo2);
    //consertar essa função

    tempo3->print();

    return 0;

}