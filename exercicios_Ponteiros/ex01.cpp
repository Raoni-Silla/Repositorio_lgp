#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int num =42;
    int *ptrNum=&num;
    cout << num << endl;// esse imprime o valor do num
    cout << &num << endl;//imprime o valor do endereço de num
    cout << ptrNum << endl;//imprime o valor de endereço para qual variavel ele aponta
    cout << *ptrNum << endl;//imprime o valor que esta dentro daquela variavel de endereço

    // * -> conteudo &->endereço
    
}