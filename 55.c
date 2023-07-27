/******************************************************************************

Vamos melhorar o jogo que fizemos no exercício 32. A partir de 
agora, o computador vai sortear um número entre 1 e 10 e o jogador vai ter 4 
tentativas para tentar acertar.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite;
    int tentativas = 0;
    int max_tentativas = 4;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Sorteia um número entre 1 e 10
    numero_sorteado = rand() % 10 + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número sorteado (entre 1 e 10).\n");

    while (tentativas < max_tentativas) {
        printf("Tentativa %d/%d. Digite seu palpite: ", tentativas + 1, max_tentativas);
        scanf("%d", &palpite);

        // Verifica se o palpite está dentro do intervalo válido
        if (palpite < 1 || palpite > 10) {
            printf("Palpite inválido. Escolha um número entre 1 e 10.\n");
        } else {
            tentativas++;

            // Verifica o resultado do palpite
            if (palpite == numero_sorteado) {
                printf("Parabéns! Você acertou o número sorteado (%d).\n", numero_sorteado);
                break;
            } else if (palpite < numero_sorteado) {
                printf("Seu palpite está abaixo do número sorteado.\n");
            } else {
                printf("Seu palpite está acima do número sorteado.\n");
            }
        }
    }

    if (tentativas == max_tentativas) {
        printf("Você excedeu o número máximo de tentativas. O número sorteado era %d.\n", numero_sorteado);
    }

    return 0;
}
