/******************************************************************************

Escreva um programa que leia um número qualquer e mostre a tabuada desse 
número.
Ex: Digite um valor: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15 ...

*******************************************************************************/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}



