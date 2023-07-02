/******************************************************************************
Crie um programa que leia o número de dias trabalhados em um mês e mostre o salário de um funcionário,
sabendo que ele trabalha 8 horas por dia e ganha R$25 por hora trabalhada.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float qtd_dia;
    printf("Digite quantos dias foram trabalhadas no mês:\n");
    scanf("%f", &qtd_dia);
    printf("Sabendo trabalhou %.0f e ganha R$25 por hora o salário do funcionário é %.2f",qtd_dia,((25*8)*qtd_dia));
    return 0;
}
