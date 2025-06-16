
#include <iostream>

using namespace std;

int main() {
    char *ptrChar = nullptr; // Declara e inicializa o ponteiro como nulo
    
    // --- Primeiro Teste: Ponteiro NULO ---
    // Este bloco 'if' será executado porque ptrChar é nullptr.
    if (ptrChar == nullptr) {
        cout << "O ponteiro não aponta para nenhum caractere valido." << endl;
    } else {
        // Este 'else' NÃO será executado na primeira vez.
        cout << "Endereço que o ponteiro contem (ptrChar): " << ptrChar << endl;
        cout << "Valor apontado pelo ponteiro (*ptrChar): " << *ptrChar << endl;
        cout << "O ponteiro agora aponta para a variavel Letra." << endl;
    }

    char Letra = 'L'; // Declara a variável caractere

    // Agora, fazemos o ponteiro apontar para o endereço de 'Letra'
    ptrChar = &Letra;

    // --- Segundo Teste: Ponteiro VÁLIDO ---
    // Este bloco 'else' será executado porque ptrChar agora aponta para 'Letra'.
    if (ptrChar == nullptr) {
        // Este 'if' NÃO será executado na segunda vez.
        cout << "O ponteiro não aponta para nenhum caractere valido." << endl;
    } else {
        cout << "Endereço que o ponteiro contem (ptrChar): " << ptrChar << endl;
        cout << "Valor apontado pelo ponteiro (*ptrChar): " << *ptrChar << endl;
        cout << "O ponteiro agora aponta para a variavel Letra: " << Letra << endl; // Adicionei Letra aqui para mostrar o valor direto também
    }

    return 0; 
}