/******************************************************************************

Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e 
guarde esses dados em três vetores. No final, mostre uma listagem contendo 
apenas os dados das funcionárias mulheres que ganham mais de R$5 mil.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50];     // Vetor para armazenar nomes
    char sexo[5];          // Vetor para armazenar sexos
    float salarios[5];     // Vetor para armazenar salários

    // Preenche os vetores com dados fornecidos pelo usuário
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do funcionário %d: ", i + 1);
        scanf("%s", nomes[i]); // Use %s para ler uma string (nome)
        
        printf("Digite o sexo do funcionário %d (M/F): ", i + 1);
        scanf(" %c", &sexo[i]); // Use ' %c' para ignorar espaços em branco
        
        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    // Mostra apenas os dados das funcionárias mulheres que ganham mais de R$5 mil
    printf("Funcionárias mulheres que ganham mais de R$5 mil:\n");
    for (int i = 0; i < 5; i++) {
        if (sexo[i] == 'F' || sexo[i] == 'f') {
            if (salarios[i] > 5000) {
                printf("Nome: %s, Salário: R$%.2f\n", nomes[i], salarios[i]);
            }
        }
    }

    return 0;
}
