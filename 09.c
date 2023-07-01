/******************************************************************************
Crie um programa que leia quanto dinheiro uma pessoa tem na carteira (em R$)
e mostre na tela quantos dólares ele pode comprar.
Considere US$1,00=R$3,45
*******************************************************************************/

#include <stdio.h>

int main()
{
    float n;
    printf("Digite o valor em R$:");
    scanf("%f",&n);
    printf("O valor R$%.2f pode comprar US$%.2f",n,n/3.45);
    
   
    return 0;
}
