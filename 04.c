/******************************************************************************
Crie um programa que leia dois números inteiro e mostre o somatório entre eles.
Digite um valor:8
Digite outro valor:5
A soma entre 8 e 5 é igual a 13.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite um valor:");
    scanf("%d",&n1);
    printf("Digite outro valor:");
    scanf("%d",&n2);
    printf("A soma entre %d e %d é igual a %d.",n1,n2,n1+n2);

    return 0;
}
