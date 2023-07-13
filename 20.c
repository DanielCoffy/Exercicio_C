/******************************************************************************

Desenvolva um programa que leia um número inteiro e mostre na tela se ele é par ou impar

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número:\n");
    scanf("%d",&n);
    
    if(n%2==0)//operador %
    {
        printf("Par");
    }
    else
    {
        printf("Ímpar");
    }
    return 0;
}
