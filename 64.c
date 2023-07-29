/******************************************************************************

Desenvolva um programa que mostre na tela a 
seguinte contagem:
0 5 10 15 20 25 30 35 40 Acabou!

*******************************************************************************/

#include <stdio.h>

int main() {
    printf("Contagem: ");
    for (int i = 0; i <= 40; i += 5) {
        printf("%d ", i);
    }
    printf("Acabou!\n");

    return 0;
}
