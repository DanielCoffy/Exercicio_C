/******************************************************************************

Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e 
15 sorteados pelo computador. Depois disso, peça para o usuário digitar um 
número (chave) e seu programa deve mostrar em que posições essa chave foi 
encontrada. Mostre também quantas vezes a chave foi sorteada.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[30];
    int chave, posicoes[30], numPosicoes = 0, numSorteios = 0;
    int i;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Preenche o vetor com números aleatórios entre 1 e 15
    for (i = 0; i < 30; i++) {
        vetor[i] = rand() % 15 + 1;
    }

    // Lê a chave fornecida pelo usuário
    printf("Digite a chave: ");
    scanf("%d", &chave);

    // Procura pela chave no vetor e guarda as posições onde foi encontrada
    for (i = 0; i < 30; i++) {
        if (vetor[i] == chave) {
            posicoes[numPosicoes] = i;
            numPosicoes++;
        }
    }

    // Conta quantas vezes a chave foi sorteada
    for (i = 0; i < 30; i++) {
        if (vetor[i] == chave) {
            numSorteios++;
        }
    }

    // Mostra as posições e a quantidade de vezes que a chave foi sorteada
    if (numPosicoes > 0) {
        printf("A chave %d foi encontrada nas seguintes posições:\n", chave);
        for (i = 0; i < numPosicoes; i++) {
            printf("Posição %d\n", posicoes[i]);
        }
        printf("A chave %d foi sorteada %d vezes.\n", chave, numSorteios);
    } else {
        printf("A chave %d não foi encontrada no vetor.\n", chave);
    }

    return 0;
}
