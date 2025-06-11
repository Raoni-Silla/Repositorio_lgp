#include <iostream>
#include <string>
using namespace std;
class multiplos {
    private:
        int n1;
        int n2;
    public:
        multiplos(int n1, int n2) {
            this->n1 = n1;
            this->n2 = n2;
        }

        void exibirDados() {
            cout << "Numero 1: " << n1 << endl;
            cout << "Numero 2: " << n2 << endl;
        }

        bool verificarMultiplos() {
            if (n1 % n2 == 0) {
                cout << n1 << " e multiplo de " << n2 << endl;
                return true; // n1 e multiplo de n2
            } else {
                cout << n1 << " nao e multiplo de " << n2 << endl;
                return false; // n1 nao e multiplo de n2
            }
        }
};

int main (){
    int n1, n2;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;

    multiplos numeros(n1, n2);
    numeros.exibirDados();
    bool resultado = numeros.verificarMultiplos();
    cout << "Resultado: " << (resultado ? "Multiplo" : "Nao multiplo") << endl;
    return 0;
}