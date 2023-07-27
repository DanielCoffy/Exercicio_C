/******************************************************************************

Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
a) Qual é a média de idade do grupo
b) Quantas pessoas tem mais de 18 anos
c) Quantas pessoas tem menos de 5 anos
d) Qual foi a maior idade lida

*******************************************************************************/

#include <stdio.h>

int main() {
    int idade, soma_idades = 0;
    int mais_de_18 = 0, menos_de_5 = 0;
    int maior_idade = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        soma_idades += idade;

        if (idade > 18) {
            mais_de_18++;
        }

        if (idade < 5) {
            menos_de_5++;
        }

        if (idade > maior_idade) {
            maior_idade = idade;
        }
    }

    float media_idades = (float)soma_idades / 10;

    printf("\nMédia de idade do grupo: %.2f\n", media_idades);
    printf("Pessoas com mais de 18 anos: %d\n", mais_de_18);
    printf("Pessoas com menos de 5 anos: %d\n", menos_de_5);
    printf("Maior idade lida: %d\n", maior_idade);

    return 0;
}
