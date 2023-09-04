/******************************************************************************

Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No 
final, mostre uma listagem com todos os nomes informados, na ordem inversa 
daquela em que eles foram informados.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char nomes[7][50]; // Vetor de strings para armazenar os nomes
    int i;

    // Lê os nomes e armazena no vetor
    for (i = 0; i < 7; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    // Exibe os nomes na ordem inversa
    printf("\nNomes na ordem inversa:\n");
    for (i = 6; i >= 0; i--) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
