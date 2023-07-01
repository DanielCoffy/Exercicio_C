/******************************************************************************
Crie um programa que leia o nome de o salário de um funcionário mostrando no final uma mensagem.
EX:
Nome do funcionário:Maria do Carmo
Slário:R$1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 no mes de Junho.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char nome[100];
    float salario;
    printf("Nome do funcionário:");
    gets (nome);
    printf("Salário do funcionário:R$");
    scanf("%f",&salario);
    printf("\nO funcionário %s tem um salário de R$%.2f no mes de Junho.",nome,salario);

    return 0;
}
