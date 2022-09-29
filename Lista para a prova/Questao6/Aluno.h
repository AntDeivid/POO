#include <iostream>
#include <string>

using namespace std;

class Aluno {

    private:
        string nomeAluno, grauAluno;
        int serieAluno;
    
    public:
        Aluno() = default;
        ~Aluno();

        string getNome();
        void setNome(string novoNome);

        int getSerie();
        void setSerie(int novaSerie);

        string getGrau();
        void setGrau(string novoGrau);

        void getQuantidadeAlunos();

};