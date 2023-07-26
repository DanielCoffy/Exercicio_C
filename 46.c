/******************************************************************************

Crie um programa que calcule e mostre na tela o resultado da soma entre 6 + 
8 + 10 + 12 + 14 + ... + 98 + 100.

*******************************************************************************/

#include <stdio.h>

int main() {
    int soma = 0;
    int numero = 6;

    while (numero <= 100) {
        soma += numero;
        numero += 2;
    }

    printf("O resultado da soma é: %d\n", soma);

    return 0;
}
