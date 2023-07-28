/******************************************************************************

Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas. 
O programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
a) O nome da pessoa mais velha
b) O nome da mulher mais jovem
c) A média de idade do grupo
d) Quantos homens tem mais de 30 anos
e) Quantas mulheres tem menos de 18 anos

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char nome[50], sexo, continuar;
    int idade, totalPessoas = 0, somaIdades = 0;
    int idadeMaisVelha = 0, idadeMulherMaisJovem = INT_MAX;
    char nomeMaisVelha[50], nomeMulherMaisJovem[50];
    int homensMaisDe30 = 0, mulheresMenosDe18 = 0;

    do {
        printf("Digite o nome da pessoa: ");
        scanf("%s", nome);

        printf("Digite o sexo da pessoa (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
            strcpy(nomeMaisVelha, nome);
        }

        if ((sexo == 'F' || sexo == 'f') && (idade < idadeMulherMaisJovem)) {
            idadeMulherMaisJovem = idade;
            strcpy(nomeMulherMaisJovem, nome);
        }

        somaIdades += idade;
        totalPessoas++;

        if (sexo == 'M' || sexo == 'm') {
            if (idade > 30) {
                homensMaisDe30++;
            }
        } else if (sexo == 'F' || sexo == 'f') {
            if (idade < 18) {
                mulheresMenosDe18++;
            }
        } else {
            printf("Sexo inválido. Digite M ou F.\n");
        }

        printf("Deseja cadastrar outra pessoa? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    if (totalPessoas == 0) {
        printf("Nenhuma pessoa foi cadastrada.\n");
    } else {
        float mediaIdades = (float)somaIdades / totalPessoas;

        printf("Nome da pessoa mais velha: %s\n", nomeMaisVelha);
        printf("Nome da mulher mais jovem: %s\n", nomeMulherMaisJovem);
        printf("Média de idade do grupo: %.2f\n", mediaIdades);
        printf("Quantidade de homens com mais de 30 anos: %d\n", homensMaisDe30);
        printf("Quantidade de mulheres com menos de 18 anos: %d\n", mulheresMenosDe18);
    }

    return 0;
}