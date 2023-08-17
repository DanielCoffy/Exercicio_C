/******************************************************************************

 Crie um programa que preencha automaticamente (usando lógica, não apenas 
atribuindo diretamente) um vetor numérico com 10 posições, conforme abaixo:
5 3 5 3 5 3 5 3 5 3

*******************************************************************************/

#include <stdio.h>

int main() {
    int vetor[10]; // Declaração do vetor com 10 posições
    int v = 5; // Valor inicial a ser atribuído

    // Preenchendo o vetor com os valores 5 e 3 alternados
    for (int i = 0; i < 10; i++) {
        vetor[i] = v; // Atribui o valor ao elemento do vetor
        v = (v == 5) ? 3 : 5; // Alterna o valor entre 5 e 3 para a próxima iteração
    }

    // Mostrando o vetor preenchido na tela
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
