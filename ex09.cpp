#include <iostream>
#include <string>
using namespace std;
class lanchonete {
    private:
        int codigo;
        double qntdcomprada;
        double valorunitario;
        double valortotal;
    public:
        lanchonete(int codigo, double qntdcomprada, double valorunitario) {
            this->codigo = codigo;
            this->qntdcomprada = qntdcomprada;
            this->valorunitario = valorunitario;
            this->valortotal = qntdcomprada * valorunitario;
        }

        void exibirDados() {
            cout << "Codigo do produto: " << codigo << endl;
            cout << "Quantidade comprada: " << qntdcomprada << endl;
            cout << "Valor unitario: " << valorunitario << endl;
            cout << "Valor total: " << valortotal << endl;
        }

        double calcularTroco(double valorPago) {
            if (valorPago < valortotal) {
                cout << "Falta: " << valortotal - valorPago << endl;
                return 0; // Indica que falta dinheiro
            } else {
                double troco = valorPago - valortotal;
                cout << "Troco: " << troco << endl;
                return troco; // Retorna o troco
            }
        }
};

int main (){
    int codigo;
    double qntdcomprada, valorunitario, valorPago;

    cout << "Digite o codigo do produto: ";
    cin >> codigo;
    cout << "Digite a quantidade comprada: ";
    cin >> qntdcomprada;
    cout << "Digite o valor unitario: ";
    cin >> valorunitario;
    cout << "Digite o valor pago: ";
    cin >> valorPago;

    lanchonete lanchonete1(codigo, qntdcomprada, valorunitario);
    lanchonete1.exibirDados();
    double resultado = lanchonete1.calcularTroco(valorPago);
    cout << "Resultado: " << resultado << endl;

    return 0;

}