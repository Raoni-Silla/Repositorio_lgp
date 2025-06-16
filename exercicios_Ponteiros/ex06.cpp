#include <iostream>
#include <math.h>
using namespace std;
void soma (int *ptrA, int *ptrB, int *ptrC, int *ptrSoma){
    *ptrSoma = *ptrA + *ptrB + *ptrC;
    cout << "os resultados da soma são:"<< endl;
    cout << *ptrSoma << endl;
}
void sub (int &numA, int &numB, int &numC, int &resultado){
     resultado = numA - numB - numC;

}
int main (){
    int numA =0;
    int numB =0;
    int numC =0;
    int resultado = 0;
    int *ptrA = &numA;
    int *ptrB = &numB;
    int *ptrC = &numC;
    int *ptrSoma = &resultado;
    

    cout << "digite o valor do primeiro numero:";
    cin >> numA;
    cout << "digite o valor do segundo numero:";
    cin >> numB;
    cout << "digite o valor do terceiro numero:";
    cin >> numC;
    soma(&numA, &numB, &numC, &resultado); // passsagem por referencia de ponteiro
    sub ( numA, numB, numC, resultado); // passagem por referencia

    // a principal diferença das duas é o fato de que uma eu
/*
// ==============================================================================
// PRINCIPAIS DIFERENÇAS: PASSAGEM POR REFERÊNCIA (&) vs. PASSAGEM POR PONTEIRO (*)
// ==============================================================================

// 1. O QUE SÃO:
//    - Passagem por Referência (&): É um APELIDO para uma variável já existente.
//                                   Não é uma nova variável, é o mesmo objeto com outro nome.
//    - Passagem por Ponteiro (*): É uma VARIÁVEL que ARMAZENA o ENDEREÇO de memória de outra variável.

// 2. SÍMBOLO NA DECLARAÇÃO DO PARÂMETRO DA FUNÇÃO:
//    - Passagem por Referência (&): Usa '&' (ex: void func(int &x))
//    - Passagem por Ponteiro (*): Usa '*' (ex: void func(int *ptr))

// 3. SÍMBOLO NA CHAMADA DA FUNÇÃO:
//    - Passagem por Referência (&): Nenhum símbolo extra. Passa-se a variável DIRETAMENTE.
//                                   (ex: func(minhaVar);)
//    - Passagem por Ponteiro (*): Usa '&' para obter o endereço da variável que será passada.
//                                 (ex: func(&minhaVar);)

// 4. COMO ACESSAR/MODIFICAR O VALOR DENTRO DA FUNÇÃO:
//    - Passagem por Referência (&): Diretamente, como se fosse a variável original.
//                                   (ex: x = 10; ou x++;)
//    - Passagem por Ponteiro (*): Desreferenciando o ponteiro com '*'.
//                                 (ex: *ptr = 10; ou (*ptr)++;)

// 5. PODE SER NULO (nullptr)?
//    - Passagem por Referência (&): NÃO. Uma referência SEMPRE deve referenciar uma variável válida.
//    - Passagem por Ponteiro (*): SIM. Um ponteiro pode ser 'nullptr', indicando que não aponta para nada.
//                                 Isso exige checagens (if (ptr != nullptr)) para evitar erros.

// 6. PODE SER REATRIBUÍDO (MUDAR PARA O QUE APONTA/REFERENCIA)?
//    - Passagem por Referência (&): NÃO. Uma vez inicializada, uma referência SEMPRE se refere à mesma variável.
//    - Passagem por Ponteiro (*): SIM. Um ponteiro pode ser alterado para apontar para diferentes endereços de memória.

// 7. SINTAXE:
//    - Passagem por Referência (&): Mais LIMPA e direta na função, parece com passagem por valor.
//    - Passagem por Ponteiro (*): Mais EXPLÍCITA, requer o uso de '*' e '&'.

// 8. SEGURANÇA:
//    - Passagem por Referência (&): Geralmente MAIS SEGURA (sempre válida, sem risco de desreferenciar nulo).
//    - Passagem por Ponteiro (*): Potencialmente MENOS SEGURA (risco de nullptr, ponteiro inválido, acesso a memória não alocada).

// 9. USO TÍPICO:
//    - Passagem por Referência (&): Modificar argumentos em funções de forma transparente;
//                                   passar objetos grandes por eficiência (evita cópia); sobrecarga de operadores.
//    - Passagem por Ponteiro (*): Acesso de baixo nível; aritmética de ponteiros;
//                                 ALOCAÇÃO DINÂMICA DE MEMÓRIA (new/delete); manipulação de ARRAYS (o nome do array é um ponteiro para o 1º elemento).

*/
}