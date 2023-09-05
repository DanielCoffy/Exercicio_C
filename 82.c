/******************************************************************************

Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em 
um vetor. No final, mostre: 
a) Qual é a média da turma
b) Quantos alunos estão acima da média da turma
c) Qual foi a maior nota digitada
d) Em que posições a maior nota aparece

*******************************************************************************/

#include <stdio.h>

int main() {
    int notas[10];
    int soma = 0;
    int maiorNota = 0;
    int posicoesMaiorNota[10];
    int acimaDaMedia = 0;
    float media;

    // Ler as notas e calcular a soma
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);
        soma += notas[i];

        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
            posicoesMaiorNota[0] = i;
            acimaDaMedia = 1;
        } else if (notas[i] == maiorNota) {
            posicoesMaiorNota[acimaDaMedia] = i;
            acimaDaMedia++;
        }
    }

    // Calcular a média
    media = (float)soma / 10;

    printf("Média da turma: %.2f\n", media);

    printf("Alunos acima da média: ");
    for (int i = 0; i < 10; i++) {
        if (notas[i] > media) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    printf("Maior nota digitada: %d\n", maiorNota);

    printf("Posições da maior nota: ");
    for (int i = 0; i < acimaDaMedia; i++) {
        printf("%d ", posicoesMaiorNota[i] + 1);
    }
    printf("\n");

    return 0;
}
