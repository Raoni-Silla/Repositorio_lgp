#include <iostream>
#include <string>
using namespace std;
class aluno {
    private:
        string nome;
        int idade;
        float n1, n2;
    public:
        aluno(string n, int i, float n1, float n2) {
            this ->nome = n;
            this ->idade = i;   
            this ->n1 = n1;
            this ->n2 = n2;
            
        }

        void exibirDados() {
            cout << "Nome: " << nome << endl;
            cout << "Idade: " << idade << endl;
            cout << "Nota 1: " << n1 << endl;
            cout << "Nota 2: " << n2 << endl;
        }

        double calcularMedia(double n1, double n2) {
            float media = this->n1 + this->n2;

           if (media < 60) {
                cout << "Aluno reprovado!" << endl;
            } else {
                cout << "Aluno aprovado!" << endl;
            }

            return media;
        }



};


int main (){
    string nome;
    int idade;
    float nota1, nota2;

    cout << "Digite o nome do aluno: ";
    getline(cin, nome);
    cout << "Digite a idade do aluno: ";
    cin >> idade;
    cout << "Digite a nota 1 do aluno: ";
    cin >> nota1;
    cout << "Digite a nota 2 do aluno: ";
    cin >> nota2;

    aluno aluno1(nome, idade, nota1, nota2);
    
    aluno1.exibirDados();
    
    double media = aluno1.calcularMedia(nota1, nota2);
    cout << "Média: " << media << endl;

    return 0;
}