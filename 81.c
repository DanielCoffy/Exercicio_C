/******************************************************************************

Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No 
final, mostre:
a) Qual é a média de idade das pessoas cadastradas
b) Em quais posições temos pessoas com mais de 25 anos
c) Qual foi a maior idade digitada (podem haver repetições)
d) Em que posições digitamos a maior idade

*******************************************************************************/

#include <stdio.h>

int main() {
    int idades[8];
    int soma_idades = 0;
    int maior_idade = 0;
    int posicoes_maior_idade[8];
    int num_pessoas_acima_25 = 0;
    int posicoes_acima_25[8];

    // Ler as idades e calcular a média
    for (int i = 0; i < 8; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        soma_idades += idades[i];

        if (idades[i] > 25) {
            posicoes_acima_25[num_pessoas_acima_25] = i;
            num_pessoas_acima_25++;
        }

        if (idades[i] > maior_idade) {
            maior_idade = idades[i];
            posicoes_maior_idade[0] = i;
            num_pessoas_acima_25 = 1;
        } else if (idades[i] == maior_idade) {
            posicoes_maior_idade[num_pessoas_acima_25] = i;
            num_pessoas_acima_25++;
        }
    }

    float media_idades = (float)soma_idades / 8;

    printf("Média de idade das pessoas cadastradas: %.2f\n", media_idades);

    printf("Posições com pessoas acima de 25 anos: ");
    for (int i = 0; i < num_pessoas_acima_25; i++) {
        printf("%d ", posicoes_acima_25[i]);
    }
    printf("\n");

    printf("Maior idade digitada: %d\n", maior_idade);

    printf("Posições com a maior idade: ");
    for (int i = 0; i < num_pessoas_acima_25; i++) {
        printf("%d ", posicoes_maior_idade[i]);
    }
    printf("\n");

    return 0;
}
