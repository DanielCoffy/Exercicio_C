/******************************************************************************

Faça um programa que preencha automaticamente um vetor numérico com 8 
posições, conforme abaixo:
999 999 999 999 999 999 999 999

*******************************************************************************/

#include <stdio.h>

int main() {
    int vetor[8];

    // Preenche todas as posições do vetor com o valor 999
    for (int i = 0; i < 8; i++) {
        vetor[i] = 999;
    }

    // Exibe o vetor preenchido
    printf("Vetor preenchido:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
