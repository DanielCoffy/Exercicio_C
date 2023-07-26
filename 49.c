/******************************************************************************

 Crie um programa que leia 6 números inteiros e no final mostre quantos deles 
são pares e quantos são ímpares.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0;
    int contador = 1;

    printf("Digite 6 números inteiros:\n");

    while (contador <= 6) {
        printf("Número %d: ", contador);
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        contador++;
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}

