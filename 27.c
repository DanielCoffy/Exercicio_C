/******************************************************************************

Crie um programa que leia duas notas de um aluno e calcule a sua média, 
mostrando uma mensagem no final, de acordo com a média atingida:
 - Média até 4.9: REPROVADO
 - Média entre 5.0 e 6.9: RECUPERAÇÃO
 - Média 7.0 ou superior: APROVADO

*******************************************************************************/

#include <stdio.h>

int main ()
{
  float n1,n2;
  printf ("Digite as duas médias:\n");
  scanf ("%f%f", &n1, &n2);
  if ((n1+n2)/2 > 7.0)
    {
        printf ("APROVADO");
    }
  else if ((n1+n2)/2 < 4.9)
    {
        printf ("REPROVADO");
    }
  else
    {
        printf ("RECUPERAÇÃO");    
    }
    
  return 0;
}
