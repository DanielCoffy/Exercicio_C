/******************************************************************************
Crie um programa que leia um número e mostre na tela seu antecessor e seu sucessor
Ex:
Digite um número:9
O antecessor de 9 é 8.
O sucessor de 9 é 10.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número:");
    scanf("%d",&n);
    printf("O antecessor de %d é %d. \n",n,n-1);
    printf("O sucecessor de %d é %d.",n,n+1);
    

    return 0;
}
