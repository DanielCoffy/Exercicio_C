/******************************************************************************

 Desenvolva um programa que mostre na tela a seguinte contagem:
100 95 90 85 80 ... 0 Acabou!

*******************************************************************************/

#include <stdio.h>

int main() {
    int inicio = 100;
    int decremento = 5;

    while (inicio >= 0) {
        printf("%d ", inicio);
        inicio -= decremento;
    }

    printf("Acabou!\n");

    return 0;
}

