/******************************************************************************

Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor. 
No final, mostre quais são os números pares que foram digitados e em que 
posições eles estão armazenados.

*******************************************************************************/

#include <stdio.h>

int main() {
    int numeros[10]; // Vetor para armazenar os números
    int i, pares[10], numPares = 0;

    // Lê os números e armazena no vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            pares[numPares] = i;
            numPares++;
        }
    }

    // Exibe os números pares e suas posições
    printf("\nNúmeros pares e suas posições:\n");
    for (i = 0; i < numPares; i++) {
        printf("Número %d (Posição %d)\n", numeros[pares[i]], pares[i]);
    }

    return 0;
}
