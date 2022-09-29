#include <iostream>
#include <string>
#include "Veiculo.h"

class Motor : public Veiculo {

    private:
        int cilindros, potencia;
    
    public:
        Motor();
        Motor(int peso, int velocidade, int preco, int cilindros, int potencia);

        int getCilindros();
        void setCilindros(int novoCilindro);

        int getPotencia();
        void setPotencia(int novaPotencia);

        void printM();

};