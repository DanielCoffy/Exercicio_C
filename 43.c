/******************************************************************************

Desenvolva um algoritmo que mostre uma contagem regressiva de 30 até 1, 
marcando os números que forem divisíveis por 4, exatamente como mostrado abaixo:
30 29 [28] 27 26 25 [24] 23 22 21 [20] 19 18 17 [16]...

*******************************************************************************/

#include <stdio.h>

int main() {
    int numero = 30;

    while (numero >= 1) {
        printf("%d", numero);
        if (numero % 4 == 0) {
            printf(" [%d]", numero);
        }
        printf(" ");
        numero--;
    }

    printf("\n");

    return 0;
}
