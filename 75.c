/******************************************************************************

  Crie um programa que preencha automaticamente (usando lógica, não apenas 
atribuindo diretamente) um vetor numérico com 15 posições com os primeiros 
elementos da sequência de Fibonacci:
1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987

*******************************************************************************/

#include <stdio.h>

int main() {
    int fibonacci[15];
    int i;
    // Inicializa os dois primeiros valores da sequência
    fibonacci[0] = 1;
    fibonacci[1] = 1;

    // Calcula os demais valores da sequência usando um loop
    for (i = 2; i < 15; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Mostra os valores do vetor
    printf("Sequencia de Fibonacci:\n");
    for (i = 0; i < 15; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}
