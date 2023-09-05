/******************************************************************************

[DESAFIO] Crie uma lógica que preencha um vetor de 20 posições com números 
aleatórios (entre 0 e 99) gerados pelo computador. Logo em seguida, mostre os 
números gerados e depois coloque o vetor em ordem crescente, mostrando no final 
os valores ordenados.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Inicializa o gerador de números aleatórios

    int vetor[20];

    // Preenche o vetor com números aleatórios entre 0 e 99
    for (int i = 0; i < 20; i++) {
        vetor[i] = rand() % 100; // Gera números entre 0 e 99
    }

    // Exibe os números gerados
    printf("Números gerados: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Ordena o vetor em ordem crescente usando Bubble Sort
    int trocou;
    do {
        trocou = 0;

        for (int i = 0; i < 19; i++) {
            if (vetor[i] > vetor[i + 1]) {
                int temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
                trocou = 1;
            }
        }
    } while (trocou);

    // Exibe os números ordenados
    printf("Números ordenados: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
