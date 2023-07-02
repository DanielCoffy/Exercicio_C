/******************************************************************************
Crie um programa que leia o preço de um produto,
calcule e mostre seu PREÇO PROMOCIONAL com 5% de desconto.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n;
    printf("Digite o preço do produto:");
    scanf("%f",&n);
    printf("O preço do produto com o desconto de 5% é R$%.2f",n*0.95);

    return 0;
}
