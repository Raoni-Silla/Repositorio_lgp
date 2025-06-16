#include <iostream>
#include <string>
using namespace std;
class TrocoOuFalta{
    private:
        float valorUnitario;
        int quantidadeComprada;
        float valorPago;
    public: 
        TrocoOuFalta(float valorUnitario, int quantidadeComprada, float valorPago){
            this->valorUnitario = valorUnitario;
            this->quantidadeComprada = quantidadeComprada;
            this->valorPago = valorPago;
        }

        void exibirDados() {
            cout << "Valor unitario: " << valorUnitario << endl;
            cout << "Quantidade comprada: " << quantidadeComprada << endl;
            cout << "Valor pago: " << valorPago << endl;
        }

        float calcularTrocoOufalta( float valorUnitario, int quantidadeComprada, float valorPago){
            float troco = 0;
            float valorTotal = valorUnitario * quantidadeComprada;
            if (valorPago < valorTotal) {
                cout << "Falta: " << valorTotal - valorPago << endl;
            } else {
                troco = valorPago - valorTotal;
                cout << "Troco: " << troco << endl;
            }
            return troco;
        
            
        }
};



int main (){
    float valorUnitario, valorPago;
    int quantidadeComprada;

    cout << "Digite o valor unitario do produto: ";
    cin >> valorUnitario;
    cout << "Digite a quantidade comprada: ";
    cin >> quantidadeComprada;
    cout << "Digite o valor pago: ";
    cin >> valorPago;

    TrocoOuFalta compra(valorUnitario, quantidadeComprada, valorPago);
    compra.exibirDados();
    float resultado = compra.calcularTrocoOufalta(valorUnitario, quantidadeComprada, valorPago);
    cout << "Resultado: " << resultado << endl;

    return 0;

}