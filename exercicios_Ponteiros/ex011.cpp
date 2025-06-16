#include <math.h>
#include <iostream>
#define t 10
using namespace std;

struct item {
    string nome;
    float preco;
    int quantidade;
};

void adicionarItem(item *ptrLista, int *ptrCont, int capacidadeMax){
    for (int i =0; i < capacidadeMax; i++){
        cout << "Digite o nome do item: ";
        cin >> ptrLista[i].nome;
        cout << "Digite o preco do item: ";
        cin >> ptrLista[i].preco;
        cout << "Digite a quantidade do item: ";
        cin >> ptrLista[i].quantidade;
        (*ptrCont)++;
    }
}

void imprimirinventario (item *ptrLista, int cont){
    for (int i = 0; i < cont; i++){
        cout << "Nome: " << ptrLista[i].nome << endl
        << "Preco: " << ptrLista[i].preco << endl
        << "Quantidade: " << ptrLista[i].quantidade << endl;
    }
}

int main (){
    item lista [t];
    int cont = 0;
    int capacidadeMax = t;
    adicionarItem(lista, &cont, capacidadeMax);
}