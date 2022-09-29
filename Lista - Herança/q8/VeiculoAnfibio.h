#include <iostream>
#include <string>
#include "VeiculoTerrestre.h"
#include "veiculoaquatico.h"

using namespace std;

class VeiculoAnfibio : public VeiculoTerrestre, public veiculoaquatico {

    private:
        string cor, placa;
        int rodas;

    public:
        VeiculoAnfibio(int peso, int velocidade, int preco, int cilindros, int potencia, int tamanhoPneu, int tamanho, int motor, string classe) : Veiculo(peso, velocidade, preco), VeiculoTerrestre(cilindros, potencia, tamanhoPneu);

        string getCor();
        void setCor(string novaCor);

        string getPlaca();
        void setPlaca(string novaPlaca);

        int getRodas();
        void setRodas(int novaRodas);

        void printAll();

};