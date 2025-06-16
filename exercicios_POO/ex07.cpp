#include <iostream>
#include <string>
using namespace std;
class lancamentoDeDardo {
    private:
    float distancia1;
    float distancia2;
    float distancia3;
    public:
    lancamentoDeDardo(float distancia1, float distancia2, float distancia3) {
        this->distancia1 = distancia1;
        this->distancia2 = distancia2;
        this->distancia3 = distancia3;
    }
    void exibirDados() {
        cout << "Distancia 1: " << distancia1 << endl;
        cout << "Distancia 2: " << distancia2 << endl;
        cout << "Distancia 3: " << distancia3 << endl;
    }
    float SaberMaiorDistancia (float distancia1, float distancia2, float distancia3) {
        float aux=0;
        if (distancia1 > distancia2){
            aux = distancia2;
        } else {
            aux = distancia1;
        } 
        if (distancia3 > aux) {
            aux = distancia3;
        }
        return aux;
    }
};

int main (){
    float distancia1, distancia2, distancia3;

    cout << "Digite a distancia do primeiro lancamento: ";
    cin >> distancia1;
    cout << "Digite a distancia do segundo lancamento: ";
    cin >> distancia2;
    cout << "Digite a distancia do terceiro lancamento: ";
    cin >> distancia3;

    lancamentoDeDardo lancamento(distancia1, distancia2, distancia3);
    lancamento.exibirDados();
    float maiorDistancia = lancamento.SaberMaiorDistancia(distancia1, distancia2, distancia3);
    cout << "A maior distancia lancada foi: " << maiorDistancia << endl;

}