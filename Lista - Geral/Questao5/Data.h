#include <iostream>
#include <string>

using namespace std;

class Data {

    private:
        int dia, mes, ano;

    public:
        Data(int dia, int mes, int ano);

        int getDia();
        void setDia(int dia);

        int getMes();
        void setMes(int mes);

        int getAno();
        void setAno(int ano);

        void printData();

        int quantidadeDias(int mes);

        int quantidadeDias(string mes);

};