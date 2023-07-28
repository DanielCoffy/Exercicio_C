/******************************************************************************

Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa 
vai parar quando for digitada a idade 999. No final, mostre quantos alunos 
existem na turma e qual é a média de idade do grupo.

*******************************************************************************/

#include <stdio.h>

int main() {
    int idade, totalAlunos = 0, somaIdades = 0;

    printf("Digite a idade dos alunos (para encerrar, digite 999):\n");

    while (1) {
        printf("Digite a idade do aluno: ");
        scanf("%d", &idade);

        if (idade == 999) {
            break; // Interrompe o loop quando a idade 999 for digitada
        }

        totalAlunos++;
        somaIdades += idade;
    }

    if (totalAlunos == 0) {
        printf("Nenhum aluno foi informado.\n");
    } else {
        float mediaIdades = (float)somaIdades / totalAlunos;
        printf("Total de alunos na turma: %d\n", totalAlunos);
        printf("Média de idade do grupo: %.2f\n", mediaIdades);
    }

    return 0;
}
