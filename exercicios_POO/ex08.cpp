#include <iostream>
#include <string>
using namespace std;
class conversorTemperatura {
    private:
        float temperatura;
    public:
        conversorTemperatura(float temperatura) {
            this->temperatura = temperatura;
        }

        void exibirDados() {
            cout << "Temperatura: " << temperatura << " graus Celsius" << endl;
        }

        float converterParaFahrenheit() {
            return (temperatura * 5/9) - 32;
        }

        float converterParaKelvin() {
            return temperatura + 273.15;
        }
};

int main() {
    float temperatura;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> temperatura;

    conversorTemperatura conversor(temperatura);
    
    conversor.exibirDados();
    
    float fahrenheit = conversor.converterParaFahrenheit();
    float kelvin = conversor.converterParaKelvin();
    
    cout << "Temperatura em Fahrenheit: " << fahrenheit << " graus" << endl;
    cout << "Temperatura em Kelvin: " << kelvin << " K" << endl;

    return 0;
}