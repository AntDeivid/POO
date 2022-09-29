#include <iostream>
#include <string>

using namespace std;

class Empresa {

    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string telefone;

    public:
        Empresa();
        Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone);

        string getNome();
        void setNome(string novoNome);

        string getEndereco();
        void setNome(string novoEndereco);

        string getCidade();
        void setNome(string novaCidade);

        string getEstado();
        void setNome(string novoEstado);

        string getCEP();
        void setNome(string novoCEP);

        string getTelefone();
        void setNome(string novoTelefone);

        void print();

};