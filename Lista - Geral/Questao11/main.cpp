#include <iostream>
using namespace std;

#include "Complex.h"

int main() {

    Complex x;
    Complex y(4.3, 8.2);
    Complex z(3.3, 1.1);

    x = y + z;
    x.print();

    x = y - z;
    x.print();

    x = y * z;
    x.print();

    if ( y == z ) { cout << "Sim" << endl; }
    else { cout << "Nao" << endl; }
    
    if ( y != z ) { cout << "Sim" << endl; }
    else { cout << "Nao" << endl; }

    return 0;

}