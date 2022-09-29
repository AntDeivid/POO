#include <iostream>
#include <string>
#include "CarroPasseio.h"

using namespace std;

int main() {

    CarroPasseio *vec1 = new CarroPasseio(100, 300, 15000, 5, 200, "xxx", "preto");

    vec1->printCP();

}