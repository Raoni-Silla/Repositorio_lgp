#include <iostream>
#include <string>
using namespace std;
class aumentosalarial {
   private:
       float salario;
       float aumentoPercentual;
       float novoSalario;
   public:
   aumentosalarial(float salario, float aumentoPercentual) {
       this->salario = salario;
       this->aumentoPercentual = aumentoPercentual;
       this->novoSalario = salario + (salario * aumentoPercentual / 100);
   }
   void exibirDados() {
       cout << "Salario atual: " << salario << endl;
       cout << "Aumento percentual: " << aumentoPercentual << "%" << endl;
       cout << "Novo salario: " << novoSalario << endl;
   }
    float calcularAumento( float salario, float aumentoPercentual) {
        if (salario == 1000){
            cout << "recebera aumento de 20%";
            aumentoPercentual = 20;
        } else if (salario >1000 && salario <=3000) {
            cout << "recebera aumento de 15%";
            aumentoPercentual = 15;
        } else if (salario > 3000 && salario <= 8000) {
            cout << "recebera aumento de 10%";
            aumentoPercentual = 10;
        } else if (salario > 8000) {
            cout << "recebera aumento de 5%";
            aumentoPercentual = 5;
        } else {
            cout << "Salario invalido!" << endl;
            return 0; // Retorna 0 se o salario for invalido
        }
        // Calcula o aumento com base no percentual
        float aumento = salario * (aumentoPercentual / 100);
        cout << "Aumento salarial: " << aumento << endl;
        return aumento; // Retorna o valor do aumento
    }
};
int main (){
    float salario, aumentoPercentual;

    cout << "Digite o salario atual: ";
    cin >> salario;

    aumentosalarial aumento(salario, aumentoPercentual);
    aumento.exibirDados();
    float resultado = aumento.calcularAumento(salario, aumentoPercentual);
    cout << "Resultado do aumento: " << resultado << endl;

    return 0;
}


