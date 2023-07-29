/******************************************************************************

Faça um programa que mostre os 10 primeiros elementos da Sequência 
de Fibonacci:
1 1 2 3 5 8 13 21...

*******************************************************************************/

#include <stdio.h>

int main() {
    int primeiro_termo = 1;
    int segundo_termo = 1;
    int proximo_termo;

    printf("Os 10 primeiros elementos da sequência de Fibonacci são:\n");

    printf("%d ", primeiro_termo);
    printf("%d ", segundo_termo);

    for (int i = 2; i < 10; i++) {
        proximo_termo = primeiro_termo + segundo_termo;
        printf("%d ", proximo_termo);
        primeiro_termo = segundo_termo;
        segundo_termo = proximo_termo;
    }

    printf("\n");

    return 0;
}
