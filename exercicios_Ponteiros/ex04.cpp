#include <iostream>
using namespace std;

void dobrarValor (int *ptrNum)// funcao para dobrar o valor passando o endereço do ponteiro
{
    *ptrNum = *ptrNum * 2;
}
int main (){
int Num = 10;
int *ptrNum = &Num;
dobrarValor(ptrNum); // passo o valor do ponteiro num que no caso é o endereço de num, passo indiretamente pra função
cout << Num << endl;
dobrarValor (&Num); // aqui eu passo o valor do endereço de num diretamente pra função
cout << Num << endl;

return 0;
}
