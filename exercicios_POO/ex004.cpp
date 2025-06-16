#include <iostream>
#include <string>
using namespace std;
class planoTelefonia {
    private:
    int minutosUsados;
    int preco = 50;
    public:
    planoTelefonia(int minutosUsados, int preco) {
        this->minutosUsados = minutosUsados;
        this->preco = preco;
    }

    void exibirDados() {
        cout << "Minutos usados: " << minutosUsados << endl;
        cout << "Preco do plano: " << preco << endl;
    }

    int calcularValorPlano( int minutosUsados, int preco) {
        int valorTotal = 0;
        if (minutosUsados <= 100) {
            valorTotal = preco;
        } else {
            valorTotal = preco + (minutosUsados - 100) * 2; // Cada minuto adicional custa 2 reais
        }
       return valorTotal;

    }
};


int main (){
    int minutosUsados;
    int preco = 50;

    cout << "Digite o numero de minutos usados: ";
    cin >> minutosUsados;

    planoTelefonia plano(minutosUsados, preco);
    
    plano.exibirDados();
    
    int valorTotal = plano.calcularValorPlano(minutosUsados, preco);
    
    cout << "Valor total do plano: " << valorTotal << endl;

    return 0;
}