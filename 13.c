/******************************************************************************
Crie algoritimo que leia o salário de um funcionário,
calcule e mostre o seu novo salário, com 15% de aumento.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float n;
    printf("Digite o salário do funcionário:");
    scanf("%f",&n);
    printf("O salário de R$%.2f com acréscimo de 15% é R$%.2f",n,n*1.15);

    return 0;
}
