/******************************************************************************

Crie um jogo de JoKenPo (Pedra-Papel-Tesoura).

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolha_jogador, escolha_computador;
    int resultado; // 0 - Empate, 1 - Jogador venceu, 2 - Computador venceu

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    printf("Bem-vindo ao JoKenPo (Pedra-Papel-Tesoura)!\n");
    printf("Escolha uma opção:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    scanf("%d", &escolha_jogador);

    if (escolha_jogador < 0 || escolha_jogador > 2) {
        printf("Opção inválida. Escolha apenas 0, 1 ou 2.\n");
        return 1;
    }

    // Gera a escolha aleatória do computador
    escolha_computador = rand() % 3;

    // Exibe as escolhas do jogador e do computador
    printf("Jogador escolheu: ");
    switch (escolha_jogador) {
        case 0: printf("Pedra\n"); break;
        case 1: printf("Papel\n"); break;
        case 2: printf("Tesoura\n"); break;
    }

    printf("Computador escolheu: ");
    switch (escolha_computador) {
        case 0: printf("Pedra\n"); break;
        case 1: printf("Papel\n"); break;
        case 2: printf("Tesoura\n"); break;
    }

    // Verifica o resultado do jogo
    if (escolha_jogador == escolha_computador) {
        resultado = 0; // Empate
    } else if ((escolha_jogador == 0 && escolha_computador == 2) ||
               (escolha_jogador == 1 && escolha_computador == 0) ||
               (escolha_jogador == 2 && escolha_computador == 1)) {
        resultado = 1; // Jogador venceu
    } else {
        resultado = 2; // Computador venceu
    }

    // Exibe o resultado
    if (resultado == 0) {
        printf("Empate!\n");
    } else if (resultado == 1) {
        printf("Você venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }

    return 0;
}



