/******************************************************************************

 Crie um jogo onde o computador vai sortear um número entre 1 e 5 o 
jogador vai tentar descobrir qual foi o valor sorteado.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Sorteia um número entre 1 e 5
    numero_sorteado = rand() % 5 + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número sorteado (entre 1 e 5): ");
    scanf("%d", &palpite);

    // Verifica se o palpite está dentro do intervalo válido
    if (palpite < 1 || palpite > 5) {
        printf("Palpite inválido. Escolha um número entre 1 e 5.\n");
        return 1;
    }

    // Verifica o resultado do palpite
    if (palpite == numero_sorteado) {
        printf("Parabéns! Você acertou o número sorteado (%d).\n", numero_sorteado);
    } else {
        printf("Você errou. O número sorteado era %d.\n", numero_sorteado);
    }

    return 0;
}
