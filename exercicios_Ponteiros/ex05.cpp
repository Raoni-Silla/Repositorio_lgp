#include <stdio.h>
#include <iostream>
using namespace std;
int main () {
cout << "Programa Exemplo ponteiros\n";
int a=10;
cout << "a: " << a << endl;
cout << "&a: " << &a << endl;
int *ptrA;
ptrA = &a;
cout << "ptrA: " << ptrA << endl;
cout << "&ptrA: " << &ptrA << endl;
cout << "*ptrA: " << *ptrA << endl;
int b=20;
int *ptrB=&b;
cout << "*ptrB: " << *ptrB << endl;
cout << "ptrB: " << ptrB << endl;
ptrB = ptrA; // essa linha significa que o endereço da variavel b esta recebendo o endereço do ponteiro a
cout << "*ptrB: " << *ptrB << endl;
*ptrB = *ptrB + 15;
cout << "a: " << a << endl;
ptrA = &b;
b = b*2;
cout << "*ptrA: " << *ptrA << endl;
}