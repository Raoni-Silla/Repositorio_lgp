#include <iostream>
using namespace std;
void ChamarReferencia (int &num1, int &num2, int &soma, int &media){
     soma = num1 + num2;
     media = soma/2;
     cout << "os resultados da soma são:"<< endl;
     cout << soma << endl;
     cout << "os resultados da media são:" << endl;
     cout << media << endl;

}

int main (){
    int a=0,b=0;
    int soma=0, media=0;
    cout << "digite o valor do primeiro numero:";
    cin >> a;
    cout << "digite o valor do segundo numero:";
    cin >> b;
    ChamarReferencia(a,b,soma, media);
    
}