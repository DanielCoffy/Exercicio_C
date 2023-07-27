/******************************************************************************

Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final:
a) Quantos homens foram cadastrados
b) Quantas mulheres foram cadastradas
c) A média de idade do grupo
d) A média de idade dos homens
e) Quantas mulheres tem mais de 20 anos

*******************************************************************************/

#include <stdio.h>

int main() {
    int pessoas_mais_90kg = 0, pessoas_menos_50kg_menos_160cm = 0, pessoas_mais_190cm_mais_100kg = 0;
    float altura, peso, soma_altura = 0;

    for (int i = 1; i <= 7; i++) {
        printf("Digite a altura da pessoa %d (em metros): ", i);
        scanf("%f", &altura);

        printf("Digite o peso da pessoa %d (em kg): ", i);
        scanf("%f", &peso);

        soma_altura += altura;

        if (peso > 90) {
            pessoas_mais_90kg++;
        }

        if (peso < 50 && altura < 1.60) {
            pessoas_menos_50kg_menos_160cm++;
        }

        if (altura > 1.90 && peso > 100) {
            pessoas_mais_190cm_mais_100kg++;
        }
    }

    float media_altura = soma_altura / 7;

    printf("\nMédia de altura do grupo: %.2f metros\n", media_altura);
    printf("Quantidade de pessoas que pesam mais de 90Kg: %d\n", pessoas_mais_90kg);
    printf("Quantidade de pessoas que pesam menos de 50Kg e têm menos de 1.60m: %d\n", pessoas_menos_50kg_menos_160cm);
    printf("Quantidade de pessoas que medem mais de 1.90m e pesam mais de 100Kg: %d\n", pessoas_mais_190cm_mais_100kg);

    return 0;
}
