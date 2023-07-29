/******************************************************************************

Desenvolva um programa que leia o primeiro termo e a razão de uma 
PA (Progressão Aritmética), mostrando na tela os 10 primeiros elementos da PA e 
a soma entre todos os valores da sequência.

*******************************************************************************/

#include <stdio.h>

int main() {
    int primeiro_termo, razao;
    int termo;
    int soma = 0;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro_termo);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    printf("Os 10 primeiros elementos da PA são:\n");
    for (int i = 0; i < 10; i++) {
        termo = primeiro_termo + i * razao;
        printf("%d ", termo);
        soma += termo;
    }

    printf("\nA soma dos 10 primeiros elementos da PA é: %d\n", soma);

    return 0;
}
