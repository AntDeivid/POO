#include <iostream>
#include <string>
#include "veiculo.h"
using namespace std;

class Veiculoaquatico: public virtual Veiculo{
    private:
        int tamanho, motor;
        string classe;

    public:
        Veiculoaquatico(int peso, int velocidade, int preco, int tamanho, int motor, string classe);

        string getClasse(){
            return classe;
        }
        void setClasse(string classe){
            this->classe = classe;
        }

        int getTamanho(){
            return tamanho;
        }
        void setTamanho(int tamanho){
            this->tamanho = tamanho;
        }

        int getMotor(){
            return motor;
        }

        void setMotor(int motor){
            this->motor = motor;
        }

        void printAQ();
};