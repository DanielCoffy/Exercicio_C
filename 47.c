/******************************************************************************

 Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 + 
450 + 400 + 350 + 300 + ... + 50 + 0

*******************************************************************************/

#include <stdio.h>

int main() {
    int soma = 0;
    int numero = 500;

    while (numero >= 0) {
        soma += numero;
        numero -= 50;
    }

    printf("O resultado da soma é: %d\n", soma);

    return 0;
}
