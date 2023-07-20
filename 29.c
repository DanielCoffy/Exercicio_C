/******************************************************************************

Desenvolva um programa que leia o nome de um funcionário, seu salário, 
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de 
acordo com a tabela a seguir:
 - Até 3 anos de empresa: aumento de 3%
 - entre 3 e 10 anos: aumento de 12.5%
 - 10 anos ou mais: aumento de 20%

*******************************************************************************/

#include <stdio.h>

int main ()
{
    char nome[50];
    int tempo;
    float salario;
    
    printf("Digite o nome do funcionário:\n");
    gets (nome);
    printf("Tempo de empresa:\n");
    scanf("%d",&tempo);
    printf("Salário:\n");
    scanf("%f",&salario);
    
    if (tempo < 3)
    {
        printf("O funcionário %s tem %d anos de empresa.\n",nome,tempo);
        printf("Seu salário atual é R$%.2f e com o reajuste de 3%% ficará R$%.2f.\n",salario,salario*1.03);
    }
    else if ((tempo > 3) && (tempo < 10))
    {
        printf("O funcionário %s tem %d anos de empresa.\n",nome,tempo);
        printf("Seu salário atual é R$%.2f e com o reajuste de 12.5%% ficará R$%.2f.\n",salario,salario*1.125);
    }
    else
    {
        printf("O funcionário %s tem %d anos de empresa.\n",nome,tempo);
        printf("Seu salário atual é R$%.2f e com o reajuste de 20%% ficará R$%.2f.\n",salario,salario*1.2);
    }
   
  return 0;
}
