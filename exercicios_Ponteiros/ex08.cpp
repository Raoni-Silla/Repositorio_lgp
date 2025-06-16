#include <iostream>
using namespace std;
void calculos (int a, int b, int c, int &maior, int &menor, float &media){
    media = (a+b+c)/3;
    if (a>b && a>c){
        maior = a;
    }else if (b>a && b>c){
        maior = b;
    }else{
        maior = c;
    }
    if (a<b && a<c){
        menor = a;
    }
    else if (b<a && b<c){
        menor = b;
    }
    else{
        menor = c;
    }
}
void calculos2(int a, int b, int c, int *maior, int *menor, float *media){
    *media = (a+b+c)/3;
    if (a>b && a>c){
        *maior = a;
    }else if (b>a && b>c){
        *maior = b;
    }else{
        *maior = c;
    }
    if (a<b && a<c){
        *menor = a;
    }
    else if (b<a && b<c){
        *menor = b;
    }
    else{
        *menor = c;
    }
}

int main (){
    int a=0,b=0,c=0;
    int maior =0, menor =0;
    float media =0;
    cout << "digite o valor do primeiro numero:";
    cin >> a;
    cout << "digite o valor do segundo numero:";
    cin >> b;
    cout << "digite o valor do terceiro numero:";
    cin >> c; 
    calculos(a,b,c,maior,menor,media);//pra passar por referencia se passa normalmente
    calculos2(a,b,c, &maior, &menor,&media);//passagem por ponteiros
    cout << "os resultados da media são:" << endl;
    cout << media << endl;
    cout << "os resultados do maior são:" << endl;
    cout << maior << endl;
    cout << "os resultados do menor são:" << endl;
    cout << menor << endl;

}