/******************************************************************************

Crie um programa que preencha automaticamente um vetor numérico com 7
números gerados aleatoriamente pelo computador e depois mostre os valores 
gerados na tela.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[7];

    // Inicializa o gerador de números aleatórios com a semente do tempo atual
    srand(time(NULL));

    // Preenche o vetor com números aleatórios entre 0 e 100
    for (int i = 0; i < 7; i++)
    {
        vet[i] = rand() % 101; // Gera um número aleatório entre 0 e 100
    }

    // Exibe os valores do vetor na tela
    printf("Valores do vetor:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
