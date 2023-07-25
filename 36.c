/******************************************************************************

 Um programa de vida saudável quer dar pontos atividades físicas que podem 
ser trocados por dinheiro. O sistema funciona assim:
 - Cada hora de atividade física no mês vale pontos
 - até 10h de atividade no mês: ganha 2 pontos por hora
 - de 10h até 20h de atividade no mês: ganha 5 pontos por hora
 - acima de 20h de atividade no mês: ganha 10 pontos por hora
 - A cada ponto ganho, o cliente fatura R$0,05 (5 centavos) 
Faça um programa que leia quantas horas de atividade uma pessoa teve por mês, 
calcule e mostre quantos pontos ela teve e quanto dinheiro ela conseguiu ganhar.

*******************************************************************************/

#include <stdio.h>

int main() {
    int horas_atividade, pontos;
    float dinheiro;

    printf("Bem-vindo ao programa de pontos por atividades físicas!\n");
    printf("Digite quantas horas de atividade física você teve no mês: ");
    scanf("%d", &horas_atividade);

    if (horas_atividade <= 10) {
        pontos = horas_atividade * 2;
    } else if (horas_atividade <= 20) {
        pontos = horas_atividade * 5;
    } else {
        pontos = horas_atividade * 10;
    }

    dinheiro = pontos * 0.05;

    printf("Você ganhou %d pontos.\n", pontos);
    printf("Você conseguiu ganhar R$%.2f.\n", dinheiro);

    return 0;
}
