/******************************************************************************

Crie um programa que preencha automaticamente (usando lógica, não apenas 
atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo:
5 10 15 20 25 30 35 40 45 50

*******************************************************************************/

#include <stdio.h>

int main() {
    int vetor[10]; // Vetor com 10 posições
    int valor = 5; // Valor inicial

    // Preenche o vetor com os valores
    for (int i = 0; i < 10; i++) {
        vetor[i] = valor;
        valor += 5; // Incrementa 5 a cada posição
    }

    // Imprime o vetor
        for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
