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
    int idade, soma_idade_homens, total_idades = 0;
    char sexo;
    int homens = 0, mulheres = 0, mulheres_mais_20 = 0;
    float media_idades_homens;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        total_idades += idade;

        printf("Digite o sexo da pessoa %d (M/F): ", i);
        getchar(); // Captura o caractere de quebra de linha deixado pelo scanf anterior
        scanf("%c", &sexo);

        if (sexo == 'M' || sexo == 'm') {
            homens++;
            soma_idade_homens += idade;
        } else if (sexo == 'F' || sexo == 'f') {
            mulheres++;
            if (idade > 20) {
                mulheres_mais_20++;
            }
        } else {
            printf("Sexo inválido. Tente novamente.\n");
            i--; // Volta uma iteração para repetir a entrada dos dados
        }
    }

    float media_idades_grupo = (float)total_idades / 5;
    if (homens > 0)
    {
      media_idades_homens = (float)soma_idade_homens / homens;
    }
    printf("\nQuantidade de homens cadastrados: %d\n", homens);
    printf("Quantidade de mulheres cadastradas: %d\n", mulheres);
    printf("Média de idade do grupo: %.2f\n", media_idades_grupo);
    printf("Média de idade dos homens: %.2f\n", media_idades_homens);
    printf("Quantidade de mulheres com mais de 20 anos: %d\n", mulheres_mais_20);

    return 0;
}
