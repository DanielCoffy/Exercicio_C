/******************************************************************************
Crie um programa que leia um número real e mostre na tela seu dobro e a terça parte
Ex:
Digite um número:3.5
O dobro de 3.5 é 7.
A terça parte de 3.5 é 1.2.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float n;
    printf("Digite um número:");
    scanf("%f",&n);
    printf("O dobro de %.1f é %.1f. \n",n,n+n);
    printf("A terça parte de %.1f é %.1f.",n,n/3);
    return 0;
}
