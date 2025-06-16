#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class bhaskara {
    private:
        float a, b, c;
    public:
        bhaskara(float a, float b, float c) {
            this->a = a;
            this->b = b;
            this->c = c;
        }

        void exibirDados() {
            cout << "Coeficiente a: " << a << endl;
            cout << "Coeficiente b: " << b << endl;
            cout << "Coeficiente c: " << c << endl;
        }

        void calcularRaizes() {
            float delta = b * b - 4 * a * c;

            if (delta < 0) {
                cout << "Nao existem raizes reais." << endl;
            } else if (delta == 0) {
                float raiz = -b / (2 * a);
                cout << "Raiz unica: " << raiz << endl;
            } else {
                float raiz1 = (-b + sqrt(delta)) / (2 * a);
                float raiz2 = (-b - sqrt(delta)) / (2 * a);
                cout << "Raiz 1: " << raiz1 << endl;
                cout << "Raiz 2: " << raiz2 << endl;
            }
        }
};

int main (){
    float a, b, c;

    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;   
    cout << "Digite o coeficiente c: ";
    cin >> c;

    bhaskara bhaskara1(a, b, c);
    bhaskara1.exibirDados();
    bhaskara1.calcularRaizes();

    return 0;

}