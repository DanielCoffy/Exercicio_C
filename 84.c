/******************************************************************************

Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses 
valores em dois vetores, em posições relacionadas. No final, mostre uma listagem 
contendo apenas os dados das pessoas menores de idade.

*******************************************************************************/

#include <stdio.h>

int main() {
    char nomes[9][50]; // Vetor para armazenar nomes
    int idades[9];    // Vetor para armazenar idades

    // Preenche os vetores com dados fornecidos pelo usuário
    for (int i = 0; i < 9; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]); // Use %s para ler uma string (nome)
        
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    // Mostra apenas os dados das pessoas menores de idade (idade < 18)
    printf("Pessoas menores de idade:\n");
    for (int i = 0; i < 9; i++) {
        if (idades[i] < 18) {
            printf("Nome: %s, Idade: %d\n", nomes[i], idades[i]);
        }
    }

    return 0;
}
