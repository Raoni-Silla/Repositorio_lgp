#include <iostream>
#include <string>
using namespace std;
class menorquetres {
    private:
    int n1;
    int n2;
    int n3;
    public:
    menorquetres(int n1, int n2, int n3) {
        this->n1 = n1;
        this->n2 = n2;
        this->n3= n3;
    }


    void exibirDados() {
        cout << "Numero 1: " << n1 << endl;
        cout << "Numero 2: " << n2 << endl;
        cout << "Numero 3: " << n3 << endl;
    }

    int verificarMenor(int n1, int n2, int n3) {
        int aux = 0;
        if (n1 < n2) {
            aux = n1;
        } else {
            aux = n2;
        }
        if (aux > n3) {
            aux = n3;
        }else if ( aux == n3) {
            cout << "Os numeros sao iguais!" << endl;
        } else {
            cout << "O menor numero e: " << aux << endl;
        }
        return aux;
    }
};


int main() {
    int n1, n2, n3;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite o terceiro numero: ";
    cin >> n3;

    menorquetres numeros(n1, n2, n3);
    
    numeros.exibirDados();
    
    int menor = numeros.verificarMenor(n1, n2, n3);
    
    cout << "O menor numero e: " << menor << endl;

    return 0;
}