#include <iostream>
#include <string>

using namespace std;

class Veiculo {

    private:
        int peso, velocidade, preco;
    
    public:
        Veiculo();
        Veiculo(int peso, int velocidade, int preco);

        int getPeso();
        void setPeso(int novoPeso);

        int getVelocidade();
        void setVelocidade(int novaVelocidade);

        int getPreco();
        void setPreco(int novoPreco);

        void print();

};