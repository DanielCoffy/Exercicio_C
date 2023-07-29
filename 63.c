/******************************************************************************

Crie um programa  que leia vários números. 
A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na 
tela:
a) O somatório entre todos os valores
b) Qual foi o menor valor digitado
c) A média entre todos os valores
d) Quantos valores são pares

*******************************************************************************/

#include <stdio.h>
#include <limits.h> // Para utilizar INT_MAX

int main() {
    int continuar = 1; // Variável para controlar se o usuário quer continuar
    int numero;
    int soma = 0; // Variável para armazenar o somatório
    int menor = INT_MAX; // Inicializa com o maior valor possível
    int quantidadeNumeros = 0; // Contador de números digitados
    int quantidadePares = 0; // Contador de números pares

    while (continuar) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        // Somatório
        soma += numero;

        // Verifica se o número é menor que o valor atual de "menor"
        if (numero < menor) {
            menor = numero;
        }

        // Verifica se o número é par
        if (numero % 2 == 0) {
            quantidadePares++;
        }

        // Atualiza o contador de números digitados
        quantidadeNumeros++;

        // Pergunta ao usuário se deseja continuar
        printf("Deseja continuar? (1 - Sim, 0 - Não): ");
        scanf("%d", &continuar);
    }

    // Calcula a média
    float media = (float)soma / quantidadeNumeros;

    // Mostra os resultados
    printf("\nSomatório dos valores: %d\n", soma);
    printf("Menor valor digitado: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);
    printf("Quantidade de valores pares: %d\n", quantidadePares);

    return 0;
}
