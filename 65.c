/******************************************************************************

Desenvolva um programa que mostre na tela a 
seguinte contagem:
100 90 80 70 60 50 40 30 20 10 0 Acabou!

*******************************************************************************/

#include <stdio.h>

int main() {
    printf("Contagem: ");
    for (int i = 100; i >= 0; i -= 10) {
        printf("%d ", i);
    }
    printf("Acabou!\n");

    return 0;
}


