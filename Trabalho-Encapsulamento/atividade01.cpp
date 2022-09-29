//ANTONIO DEIVID SANTOS COSTA e JEFERSON AIRES DE SOUSA

//BIBLIOTECAS
#include <iostream>
#include <string>

using namespace std;

//CLASSE
class Membros {

    private:
        string nome, ocupacao, email, palavraChave;
        int idade, tipo;
        char sexo;

    public:
        //CONSTRUTUTOR
        Membros(int tipo);

        /*void professor(string nome, string ocupacao, string email, string palavraChave, int idade, char sx);
        void tecnico(string nome, string ocupacao, string email, string palavraChave, int idade, char sx);
        void aluno(string nome, string ocupacao, string email, string palavraChave, int idade, char sx);*/

        string getNome();
        void setNome(string novoNome);

        string getOcupacao();
        void setOcupacao(string novaOcupacao);

        string getEmail();
        void setEmail(string novoEmail);

        string getPalavraChave();
        void setPalavraChave(string novaPalavra);

        int getIdade();
        void setIdade(int novaIdade);

        char getSexo();
        void setSexo(char novoSexo);

        void imprimir();

};

//CONSTRUTUTOR
Membros::Membros(int tipo) {

    if (tipo == 1) {

        this->nome = "Thiago Werlley";
        this->ocupacao = "Professor";
        this->email = "th@gmail.com";
        this->palavraChave = "werlley";
        this->idade = 29;
        this->sexo = 'M';

    }

    else if (tipo == 2) {

        this->nome = "Deivid";
        this->ocupacao = "Tecnico";
        this->email = "deivid@gmail.com";
        this->palavraChave = "loirinha";
        this->idade = 19;
        this->sexo = 'M';

    }

    else {

        this->nome = "Jeferson";
        this->ocupacao = "Aluno";
        this->email = "jefin@gmail.com";
        this->palavraChave = "clarinha";
        this->idade = 17;
        this->sexo = 'M';

    }

}

void Membros::imprimir() {

    cout << "-------------------------------------------------------------" << endl;
    cout << "Nome: " << this->nome << endl; 
    cout << "Ocupacao: " << this->ocupacao << endl;
    cout << "Email: " << this->email << endl;
    cout << "Palavra Chave: " << this->palavraChave << endl;
    cout << "Idade: " << this->idade << endl;
    cout << "Sexo: " << this->sexo << endl; 
    cout << "-------------------------------------------------------------" << endl;

}

//ENCAPSULUMENTO
string Membros::getNome() {
    return nome;
}
void Membros::setNome(string novoNome) {
    this->nome = novoNome;
}

string Membros::getOcupacao() {
    return ocupacao;
}
void Membros::setOcupacao(string novaOcupacao) {
    this->ocupacao = novaOcupacao;
}

void Membros::setEmail(string novoEmail) {
    this->email = email;
}
string Membros::getEmail() {
    return email;
}

void Membros::setPalavraChave(string novaPalavra) {
    this->palavraChave = novaPalavra;
}
string Membros::getPalavraChave() {
    return palavraChave;
}

void Membros::setIdade(int novaIdade) {
    this->idade = novaIdade;
}
int Membros::getIdade() {
    return idade;
}

void Membros::setSexo(char novoSexo) {
    this->sexo = novoSexo;
}
char Membros::getSexo() {
    return sexo; 
}

//MAIN
int main() {

    Membros *prof = new Membros(1);
    Membros *tec = new Membros(2);
    Membros *alu = new Membros(3);

    prof->imprimir();
    tec->imprimir();
    alu->imprimir();

}