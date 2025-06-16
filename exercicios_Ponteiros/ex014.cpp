#include <iostream>
#define t 5
using namespace std;
struct item{
    int cod;
    string nome;
    string desc;
    float val;
};

void preencherDados (item *ptrItens,int  &contitens){
int opcao = 0;
        cout << "digite 1 pra continuar preenchendo dados";
        cin >>opcao;

    for (int i = 0; i < t && opcao == 1 ; i++){    
         
         
         cout << "Digite o codigo do item: ";
         cin >> ptrItens[i].cod;
         cout << "Digite o nome do item: ";
         cin.ignore();
         getline(cin, ptrItens[i].nome);
         cout << "Digite a descricao do item: ";
         cin >> ptrItens[i].desc;
         cout << "Digite o valor do item: ";
         cin >> ptrItens[i].val;
         cout << "digite 1 pra continuar preenchendo dados";
         cin >>opcao;
         if (opcao != 1){
            break;
         }
   contitens++;
       }

   } 

   void imprimir_dados (item *ptrItens, int contitens){

    for (int i = 0; i < contitens; i++){
        cout << "codigo: " << ptrItens[i].cod << endl;
        cout << "nome: " << ptrItens[i].nome << endl;
        cout << "descricao: " << ptrItens[i].desc << endl;
        cout << "valor: " << ptrItens[i].val << endl;
        cout << endl;
    }
    }
void ajustarpreco (item *ptrItens, int &contitens, float &porcentagem, float *ptrPrecototal){
    cout << "digite o valor da porcentagem do reajuste:";
    cin >> porcentagem;
    porcentagem = porcentagem / 100;
    for (int i = 0; i < contitens; i++){
     ptrItens[i].val = ptrItens[i].val + (ptrItens[i].val * porcentagem);
    cout << "o novo preço do"<<ptrItens[i].nome<<"é"<<ptrItens[i].val<<endl;


}
}
int main (){
    int contitens = 0;
    float precototal = 0;

    float porcentagem;
    item itens [t];
    preencherDados (itens, contitens);
    imprimir_dados (itens, contitens);
    ajustarpreco (itens, contitens, porcentagem, &precototal);
    imprimir_dados (itens, contitens);
    return 0;

   
}