#include <iostream>
#include <string>
using namespace std;
class aluno {
    private:
        string nome;
        int idade;
        float nota1, nota2;
    public:
        aluno(string n, int i, float n1, float n2) {
            nome = this->nome;
           
            nota1 = n1;
            nota2 = n2;
        }

        void exibirDados() {
            cout << "Nome: " << nome << endl;
            cout << "Idade: " << idade << endl;
            cout << "Nota 1: " << nota1 << endl;
            cout << "Nota 2: " << nota2 << endl;
        }

        float calcularMedia() {
            return (nota1 + nota2) / 2;
        }

};