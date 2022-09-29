#include <iostream>
#include <string>
#include "Motor.h"

using namespace std;

class CarroPasseio : public Motor, public Veiculo {

    private:
        string modelo, cor;
    
    public:
        CarroPasseio();
        CarroPasseio(int peso, int velocidade, int preco, int cilindros, int potencia, string modelo, string cor);

        string getModelo();
        void setModelo(string novoModelo);

        string getCor();
        void setCor(string novaCor);

        printCP();

};