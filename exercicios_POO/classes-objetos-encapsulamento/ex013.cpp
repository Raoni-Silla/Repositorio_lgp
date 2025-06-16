#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class PontoCartesiano {
private:
    double x;
    double y;

public:
    PontoCartesiano(double coordX, double coordY) {
        this->x = coordX;
        this->y = coordY;
    }

    void determinarQuadrante() const {
        if (this->x == 0 && this->y == 0) {
            cout << "Origem" << endl;
        }
        else if (this->y == 0) {
            cout << "Eixo X" << endl;
        }
        else if (this->x == 0) {
            cout << "Eixo Y" << endl;
        }
        else if (this->x > 0 && this->y > 0) {
            cout << "Q1" << endl;
        }
        else if (this->x < 0 && this->y > 0) {
            cout << "Q2" << endl;
        }
        else if (this->x < 0 && this->y < 0) {
            cout << "Q3" << endl;
        }
        else {
            cout << "Q4" << endl;
        }
    }
};

int main() {
    double valorX, valorY;

    cout << "--- Teste Interativo ---" << endl;
    cout << "Valor de X: ";
    cin >> valorX;
    cout << "Valor de Y: ";
    cin >> valorY;

    PontoCartesiano meuPonto(valorX, valorY);
    meuPonto.determinarQuadrante();

    cout << endl;

    cout << "--- Testando exemplos do problema ---" << endl;

    PontoCartesiano p1(4.5, -2.2);
    cout << "Ponto (4.5, -2.2): ";
    p1.determinarQuadrante();

    PontoCartesiano p2(3.1, 2.0);
    cout << "Ponto (3.1, 2.0): ";
    p2.determinarQuadrante();

    PontoCartesiano p3(0.0, 0.0);
    cout << "Ponto (0, 0): ";
    p3.determinarQuadrante();

    PontoCartesiano p4(3.8, 0.0);
    cout << "Ponto (3.8, 0): ";
    p4.determinarQuadrante();

    PontoCartesiano p5(0.0, -5.0);
    cout << "Ponto (0, -5.0): ";
    p5.determinarQuadrante();

    PontoCartesiano p6(-1.0, -1.0);
    cout << "Ponto (-1.0, -1.0): ";
    p6.determinarQuadrante();

    return 0;
}
