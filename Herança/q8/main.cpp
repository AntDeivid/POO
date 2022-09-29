#include <iostream>
#include <string>
#include "VeiculoAnfibio.h"
using namespace std;

int main()
{
    VeiculoAnfibio *anfibio = new VeiculoAnfibio(8000, 180, 45000, 50, 1289, 3, 100, 200, "luxo");

    cout << endl;

    VeiculoAnfibio->printAll();
}