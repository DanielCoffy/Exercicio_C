/******************************************************************************

Faça um programa que leia um número inteiro 
positivo e mostre na tela uma contagem de 0 até o valor digitado:
Ex: Digite um valor: 9
Contagem: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, FIM!

*******************************************************************************/

#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    printf("Contagem: ");
    for (int i = 0; i <= valor; i++) {
        printf("%d", i);
        if (i < valor) {
            printf(", ");
        }
    }
    printf(", FIM!\n");

    return 0;
}



