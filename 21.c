/******************************************************************************

Faça um algoritmo que leia um determinado ano e mostre se ele é ou não 
BISSEXTO.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ano;
    printf("Digite o ano:\n");
    scanf("%d",&ano);
    
    if(ano%4==0)//operador %
    {
      printf ("O ano %d É BISSEXTO.",ano);
    }
    else
    {
        printf ("O ano %d NÃO É BISSEXTO.",ano);
    }
    return 0;
}
