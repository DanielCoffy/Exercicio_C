/******************************************************************************

 Faça um programa que leia 7 números inteiros e no final mostre o somatório 
entre eles.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num, somatorio = 0;
    int contador = 1;

    printf("Digite 7 números inteiros:\n");

    while (contador <= 7) {
        printf("Número %d: ", contador);
        scanf("%d", &num);
        somatorio += num;
        contador++;
    }

    printf("O somatório dos 7 números é: %d\n", somatorio);

    return 0;
}
