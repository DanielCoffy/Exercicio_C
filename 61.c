/******************************************************************************

Crie um programa que mostre na tela a seguinte contagem
0 3 6 9 12 15 18 21 24 27 30 Acabou!

*******************************************************************************/

#include <stdio.h>

int main() {
    printf("Contagem: ");
    for (int i = 0; i <= 30; i += 3) {
        printf("%d ", i);
    }
    printf("Acabou!\n");

    return 0;
}

