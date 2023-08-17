/******************************************************************************

 Crie um programa que preencha automaticamente (usando lógica, não apenas 
atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo:
9 8 7 6 5 4 3 2 1 0

*******************************************************************************/

#include <stdio.h>

int main() {
    int vetor[10]; // Declaração do vetor com 10 posições
    int val = 9; // Valor inicial a ser atribuído

    // Preenchendo o vetor com os valores de 9 a 0
    for (int i = 0; i < 10; i++) {
        vetor[i] = val; // Atribui o valor ao elemento do vetor
        val--; // Decrementa o valor para a próxima iteração
    }

    // Mostrando o vetor preenchido na tela
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
