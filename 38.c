/******************************************************************************

 Escreva um programa que mostre na tela a seguinte contagem: 
6 7 8 9 10 11 Acabou!

*******************************************************************************/

#include <stdio.h>

int main() {
    int inicio = 6;
    int fim = 11;

    while (inicio <= fim) {
        printf("%d ", inicio);
        inicio++;
    }

    printf("Acabou!\n");

    return 0;
}
