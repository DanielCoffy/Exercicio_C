/******************************************************************************

Crie um programa que leia vários números pelo teclado e mostre no final o 
somatório entre eles.
Obs: O programa será interrompido quando o número 1111 for digitado

*******************************************************************************/

#include <stdio.h>

int main() {
    int numero, somatorio = 0;

    printf("Digite os números (para encerrar, digite 1111):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 1111) {
            break; // Interrompe o loop quando o número 1111 for digitado
        }

        somatorio += numero;
    }

    printf("O somatório dos números digitados é: %d\n", somatorio);

    return 0;
}

