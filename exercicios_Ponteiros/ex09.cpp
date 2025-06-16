 //Em C++ moderno, a preferência é usar a classe std::string (do cabeçalho <string>). Ela gerencia a memória automaticamente, é mais segura e fácil de usar.

//Cópia: std::string s1 = s2; ou s1 = "novo texto";
//Concatenação: s1 = s1 + s2; ou s1 += s2;
//Comparação: if (s1 == s2) ou if (s1 < s2)

#include <iostream>
#include <string>
using namespace std;

struct livro {
    int codigo;
    string titulo;
    string autor;
    int ano;
    float preco;
};

void imprimirlivro(livro *ptrlivro){
    cout << "codigo: " << ptrlivro->codigo << endl;
    cout << "titulo: " << ptrlivro->titulo << endl;
    cout << "autor: " << ptrlivro->autor << endl;
    cout << "ano: " << ptrlivro->ano << endl;
    cout << "preco: " << ptrlivro->preco << endl;
    cout << endl;
} 

int main() {
    struct livro livro1;
    livro *ptrMeulivro = &livro1;
    livro1.codigo = 1;
    livro1.titulo = "Livro 1";
    livro1.autor = "Autor 1";
    livro1.ano = 2023;
    livro1.preco = 19.99;
    imprimirlivro(ptrMeulivro);
    return 0;
}



