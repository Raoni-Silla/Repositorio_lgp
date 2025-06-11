#include <iostream>
#include <string>
#include <iomanip>

class Jogo {
public:
    Jogo() {}

    void calcularEDuracao(int horaInicial, int horaFinal) const {
        if (horaInicial < 0 || horaInicial > 23 || horaFinal < 0 || horaFinal > 23) {
            std::cout << "Horário(s) de entrada invalido(s)! As horas devem estar entre 0 e 23." << std::endl;
            return;
        }

        int duracao;

        if (horaFinal > horaInicial) {
            duracao = horaFinal - horaInicial;
        } else if (horaInicial > horaFinal) {
            duracao = (24 - horaInicial) + horaFinal;
        } else {
            duracao = 24;
        }

        std::cout << "O JOGO DUROU " << duracao << " HORA(S)" << std::endl;
    }
};

int main() {
    int horaInicial, horaFinal;

    std::cout << "Digite a hora inicial: ";
    std::cin >> horaInicial;
    std::cout << "Digite a hora final: ";
    std::cin >> horaFinal;

    Jogo meuJogo;
    meuJogo.calcularEDuracao(horaInicial, horaFinal);

    std::cout << "\n--- Testando exemplos do problema ---" << std::endl;

    std::cout << "Exemplo 1 (16 -> 2): ";
    meuJogo.calcularEDuracao(16, 2);

    std::cout << "Exemplo 2 (0 -> 0): ";
    meuJogo.calcularEDuracao(0, 0);

    std::cout << "Exemplo 3 (2 -> 16): ";
    meuJogo.calcularEDuracao(2, 16);

    std::cout << "Exemplo 4 (Horas invalidas 25 -> 10): ";
    meuJogo.calcularEDuracao(25, 10);

    return 0;
}
