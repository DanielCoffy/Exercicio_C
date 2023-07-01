/******************************************************************************
Crie um programa que leia duas notas de um aluno em uma matéria e mostre na tela sua média na disciplina.
Nota 1:4.5
Nota 2:8.5
A média entre 4.5 e 8.5 é igual a 6.5.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1, n2;
    printf("Nota 1:");
    scanf("%f",&n1);
    printf("Nota 2:");
    scanf("%f",&n2);
    printf("A média entre %.1f e %.1f é igual a %.1f.",n1,n2,(n1+n2)/2);

    return 0;
}
