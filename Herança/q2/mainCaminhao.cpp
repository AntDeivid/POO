#include <iostream>
#include <string>
#include "Caminhao.h"

using namespace std;

int main() {

    Caminhao *vec1 = new Caminhao(100, 300, 15000, 5, 200, 3, 17, 20);

    vec1->printCA();

}