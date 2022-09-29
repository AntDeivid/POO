#include <iostream>

using namespace std;

class Tempo {

    private:
        int horas, minutos, segundos;
    
    public:
        Tempo();
        Tempo(int horas, int minutos, int segundos);

        int getHoras();
        void setHoras(int novaHora);

        int getMinutos();
        void setMinutos(int novoMinuto);

        int getSegundos();
        void setSegundos(int novoSegundos);

        void print();

        void subtrair(Tempo *tempo);
        void somar(Tempo *tempo);
        Tempo somar(Tempo *tempo1, Tempo *tempo2);

};