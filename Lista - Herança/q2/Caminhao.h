#include <iostream>
#include <string>
#include "Motor.h"

using namespace std;

class Caminhao : public Veiculo, public Motor {

    private:
        float toneladas, alturaMaxima, comprimento;
    
    public:
        Caminhao(int peso, int velocidade, int preco, int cilindros, int potencia, float toneladas, float alturaMaxima, float comprimento);

        float getToneladas();
        void setToneladas(float novaToneladas);

        float getAlturaMaxima();
        void setAlturaMaxima(float novaAltura);

        float getComprimento();
        void setComprimento(float novoComprimento);

        void printCA();
};