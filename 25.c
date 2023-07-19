/******************************************************************************

[DESAFIO] Crie um programa que leia o tamanho de 3 segmentos de reta. 
Analise seus comprimentos e diga se é possível formar um triângulo com essas 
retas. Matematicamente, para 3 segmentos formarem um triângulo, o comprimento 
de cada lado deve ser menor que a soma dos outros dois.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main ()
{
  float a, b, c;
  setlocale(LC_ALL," ");
  printf ("Digite o tamanho das 3 retas:\n");
  scanf ("%f%f%f", &a, &b, &c);
  if ((a > b + c) || (b > a + c) || (c > a + b))
    {
        printf ("Não é possível formar um triângulo. \n");
        printf ("Pois uma das retas é maior que a soma das outras duas.");
    }
  else
    {
        printf ("Com os valores dos segmentos apresentados é possível formar um triângulo.");
    }
  return 0;
}
