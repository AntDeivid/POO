#include <iostream>
#include <string>
#include "Veiculo.h"

class VeiculoTerrestre : virtual public Veiculo {

    private:
        int cilindros, potencia, tamanhoPneu;
    
    public:
        VeiculoTerrestre();
        VeiculoTerrestre(int peso, int velocidade, int preco, int cilindros, int potencia, int tamanhoPneu);

        int getCilindros();
        void setCilindros(int novoCilindro);

        int getPotencia();
        void setPotencia(int novaPotencia);

        int getTamanhoPneu();
        void setTamanhoPneu(int novoTamanho);

        void printT();

};