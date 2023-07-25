/******************************************************************************

Faça um algoritmo que mostre na tela a seguinte contagem:
10 9 8 7 6 5 4 3 Acabou!

*******************************************************************************/

#include <stdio.h>

int main() {
    int inicio = 10;
    int fim = 3;

    while (inicio >= fim) {
        printf("%d ", inicio);
        inicio--;
    }

    printf("Acabou!\n");

    return 0;
}
