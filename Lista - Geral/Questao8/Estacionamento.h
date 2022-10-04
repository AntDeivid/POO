#include <iostream>
#include <string>

using namespace std;

class Estacionamento {

    private:
        string placa, modelo;
    
    public:
        Estacionamento(string placa, string modelo);

        string getPlaca();
        void setPlaca(string placa);

        string getModelo();
        void setModelo(string modelo);

        void print();

        double custoTotal(int horas);

};