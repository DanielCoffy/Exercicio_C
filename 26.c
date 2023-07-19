/******************************************************************************

Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando 
na tela uma das mensagens abaixo:
 - O primeiro valor é o maior
 - O segundo valor é o maior
 - Não existe valor maior, os dois são iguais

*******************************************************************************/

#include <stdio.h>

int main ()
{
  int a, b, c;
  printf ("Digite 2 números:\n");
  scanf ("%d%d", &a, &b);
  if (a > b)
    {
        printf ("O valor %d é maior.",a);
    }
  else
    {
        printf ("O valor %d é maior.",b);
    }
  return 0;
}
