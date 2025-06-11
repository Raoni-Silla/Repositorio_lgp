#include <iostream>
#include <string>
using namespace std;
class MedidorGlicose {
    private:
    float nivelGlicose;
    public:
    MedidorGlicose(float nivelGlicose) {
        this->nivelGlicose = nivelGlicose;
    }
    void exibirDados() {
        cout << "Nivel de glicose: " << nivelGlicose << endl;
    }
    int verificarNivelGlicose(float nivelGlicose) {
        if (nivelGlicose < 70) {
            cout << "Hipoglicemia: Nivel de glicose muito baixo!" << endl;
            return -1; // Hipoglicemia
        } else if (nivelGlicose >= 70 && nivelGlicose <= 100) {
            cout << "Nivel de glicose normal." << endl;
            return 0; // Normal
        } else if (nivelGlicose > 100 && nivelGlicose <= 140){
            cout << "nivel de glicose elevado!" << endl;
            return 1; // elevado
        } else {
            cout << "Hiperglicemia: Nivel de glicose muito alto!" << endl;
            return 2; // Hiperglicemia
        }
    }
};


int main() {
    float nivelGlicose;

    cout << "Digite o nivel de glicose: ";
    cin >> nivelGlicose;

    MedidorGlicose medidor(nivelGlicose); //instantia a classe com o nivel de glicose e cria o objeto medidor
    
    medidor.exibirDados();
    
    int resultado = medidor.verificarNivelGlicose(nivelGlicose);
    
    cout << "Resultado: " << resultado << endl;

    return 0;
}