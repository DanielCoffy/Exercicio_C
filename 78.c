/******************************************************************************

Escreva um programa que leia 15 números e guarde-os em um vetor. No final, 
mostre o vetor inteiro na tela e em seguida mostre em que posições foram 
digitados valores que são múltiplos de 10.

*******************************************************************************/

#include <stdio.h>

int main() {
    int numeros[15]; // Vetor para armazenar os números
    int i, multiplosDe10[15], numMultiplos = 0;

    // Lê os números e armazena no vetor
    for (i = 0; i < 15; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 10 == 0) {
            multiplosDe10[numMultiplos] = i;
            numMultiplos++;
        }
    }

    // Exibe o vetor completo
    printf("\nVetor completo:\n");
    for (i = 0; i < 15; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Exibe as posições dos múltiplos de 10
    printf("Posições dos múltiplos de 10:\n");
    for (i = 0; i < numMultiplos; i++) {
        printf("Posição %d: %d\n", multiplosDe10[i], numeros[multiplosDe10[i]]);
    }

    return 0;
}
