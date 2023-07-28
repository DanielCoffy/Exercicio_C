/******************************************************************************

Crie um programa que leia o sexo e a idade de várias pessoas. O programa vai 
perguntar se o usuário quer continuar ou não a cada pessoa. No final, mostre:
a) qual é a maior idade lida
b) quantos homens foram cadastrados
c) qual é a idade da mulher mais jovem
d) qual é a média de idade entre os homens

*******************************************************************************/

#include <stdio.h>

int main() {
    char sexo, continuar;
    int idade, maiorIdade = 0, homensCadastrados = 0, idadeMulherMaisJovem = 0;
    int somaIdadeHomens = 0, totalHomens = 0;

    do {
        printf("Digite o sexo da pessoa (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if (sexo == 'M' || sexo == 'm') {
            homensCadastrados++;
            somaIdadeHomens += idade;
            totalHomens++;
        } else if (sexo == 'F' || sexo == 'f') {
            if (idadeMulherMaisJovem == 0 || idade < idadeMulherMaisJovem) {
                idadeMulherMaisJovem = idade;
            }
        } else {
            printf("Sexo inválido. Digite M ou F.\n");
        }

        printf("Deseja cadastrar outra pessoa? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("Maior idade lida: %d\n", maiorIdade);
    printf("Quantidade de homens cadastrados: %d\n", homensCadastrados);

    if (idadeMulherMaisJovem > 0) {
        printf("Idade da mulher mais jovem: %d\n", idadeMulherMaisJovem);
    } else {
        printf("Nenhuma mulher foi cadastrada.\n");
    }

    if (totalHomens > 0) {
        float mediaIdadeHomens = (float)somaIdadeHomens / totalHomens;
        printf("Média de idade entre os homens: %.2f\n", mediaIdadeHomens);
    } else {
        printf("Nenhum homem foi cadastrado.\n");
    }

    return 0;
}
