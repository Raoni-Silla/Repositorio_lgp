#include <math.h>
#include <iostream>
using namespace std;
int main (){
    float preco = 19.99;
    float *ptrPreco = &preco;
    cout << preco << endl;
    cout << &preco << endl;
    cout << ptrPreco << endl;
    cout << *ptrPreco << endl;

    *ptrPreco = 25.50;
    cout << preco << endl;
}

