#include <iostream>
using namespace std;
struct produto {
    string nome;
    int id;
    float preco;
    int quantidade;
};
void lerDadosProd(produto *ptrp1){
    for (int i = 0; i < 5; i++){
        cout << "Digite o nome do produto: ";
        cin.ignore();
        getline(cin, ptrp1[i].nome);
        cout << "Digite o id do produto: ";
        cin >> ptrp1[i].id;
        cout << "Digite o preco do produto: ";
        cin >> ptrp1[i].preco;
        cout << "Digite a quantidade do produto: ";
        cin >> ptrp1[i].quantidade;
    }
}
void imprimirDadosProd(produto *ptrp1){ 
    for (int i = 0; i < 5; i++){
        cout << "Nome: " << ptrp1[i].nome << endl;
        cout << "Id: " << ptrp1[i].id << endl
        << "Preco: " << ptrp1[i].preco << endl
        << "Quantidade: " << ptrp1[i].quantidade << endl;
    }
}
   
void aplicarDesconto(produto *ptrp1, float porcentagem){ 
    cout << "Digite a porcentagem de desconto: ";
    cin >> porcentagem;
    porcentagem = porcentagem / 100;
    for (int i = 0; i < 5; i++){
        ptrp1[i].preco = ptrp1[i].preco - (ptrp1[i].preco * porcentagem);
    }
}
int main (){
    float porcentagem;
    produto p1 [5];
    lerDadosProd(p1);
    imprimirDadosProd(p1);
    aplicarDesconto(p1,porcentagem);
    imprimirDadosProd(p1);
    return 0;
}