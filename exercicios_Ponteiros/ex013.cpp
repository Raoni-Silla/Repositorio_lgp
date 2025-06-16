#include <iostream>
using namespace std;
struct aluno {
    string nome;
    int idade;
    float nota1,nota2;
    float media;
};

void preencherAlunos(aluno *ptrAlunos, int &contAlunos)
{
    for (int i = 0; i < 5; i++){
        cout << "Digite o nome do aluno: ";
        cin >> ptrAlunos[i].nome;
        cout << "Digite a idade do aluno: ";
        cin >> ptrAlunos[i].idade;
        cout << "Digite a primeira nota do aluno: ";
        cin >> ptrAlunos[i].nota1;
        cout << "Digite a segunda nota do aluno: ";
        cin >> ptrAlunos[i].nota2;
        }
}

//getline(cin,ptralunos[i].nome)
void mediaAlunos (aluno *ptrAlunos, int contAlunos){
    for (int i = 0; i < 5; i++){
        ptrAlunos[i].media = (ptrAlunos[i].nota1 + ptrAlunos[i].nota2)/2;
    }
}

void imprimirAlunos (aluno *ptrAlunos, int contAlunos){
    for (int i = 0; i < 5; i++){
        cout << "Nome: " << ptrAlunos[i].nome << endl;
        cout << "Idade: " << ptrAlunos[i].idade << endl;
        cout << "Nota 1: " << ptrAlunos[i].nota1 << endl;
        cout << "Nota 2: " << ptrAlunos[i].nota2 << endl;
        mediaAlunos(ptrAlunos, contAlunos);
        cout << "media :"<< ptrAlunos[i].media << endl;
    }
}
int main (){
    struct aluno alunos[5];
    int contAlunos = 0;
    preencherAlunos(alunos, contAlunos);
    imprimirAlunos (alunos, contAlunos);
    return 0;
}
