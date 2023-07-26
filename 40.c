/******************************************************************************

Faça um algoritmo que mostre na tela a seguinte contagem:
10 9 8 7 6 5 4 3 Acabou!

*******************************************************************************/

#include <stdio.h>

int main() {
    int inicio = 0;
    int fim = 18;
    int incremento = 3;

    while (inicio <= fim) {
        printf("%d ", inicio);
        inicio += incremento;
    }

    printf("Acabou!\n");

    return 0;
}
