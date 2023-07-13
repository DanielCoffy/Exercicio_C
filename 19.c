/******************************************************************************

Crie um programa que leia o nome e duas notas de um aluno, calcule a média aritmética
e mostre na tela.
No final analise e mostre se o aluno teve ou não um bom aproveitamento
(se ficou acima da média 7.0)

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1,n2;
    char nome[100];
    printf("Digite o nome do aluno:\n");
    gets (nome);
    printf("Digite as notas do aluno:\n");
    scanf("%f %f",&n1,&n2);
    
    if ((n1+n2)/2<7)
    {
        printf("O aluno %s teve a média %.1f, portanto está reprovado.\n",nome,(n1+n2)/2);
    }
    else
    {
         printf("O aluno %s teve a média %.1f, portanto está aprovado.\n",nome,(n1+n2)/2);
    }

    return 0;
}
