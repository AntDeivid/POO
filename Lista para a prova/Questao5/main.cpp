#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

int main() {

    //Instanciando novo objeto data1
    Data *data1 = new Data(17, 11, 2022);

    //Printando a data recebida no objeto
    data1->printData();
    //Imprimindo a quantidade de dias até o respectivo mês
    cout << data1->quantidadeDias("novembro") << endl;

    //Setando valores diferentes para os atributos de dia, mês e ano
    data1->setDia(28);
    data1->setMes(9);
    data1->setAno(2022);

    //Printando a data e imprimindo a quantidade de dias até o seu mês
    data1->printData();

    cout << data1->quantidadeDias(data1->getMes()) << endl;

    return 0;

}