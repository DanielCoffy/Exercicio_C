/******************************************************************************
A locadora de carros precisa de sua ajuda para cobrar seus serviços.
Escreva um programa que pergunte a quantidade de KM percorridos por um carro alugado.
Calcule o preço total a pagar sabendo que o carro custa R$90 por dia e R$o.20 por KM rodado.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float qtd_dia, qtd_km;
    printf("Digite a quantos dias e a quantidade de KM rodados pelo cliente:\n");
    scanf("%f %f", &qtd_dia, &qtd_km);
    printf("O cliente usou por um total de %.0f dias com o custo de R$90 o dia.\n",qtd_dia);
    printf("O cliente rodou por um total de %.0fKms ao custo de R$0.20 por KM.\n",qtd_km);
    printf("O valor a ser pago é R$%.2f em diárias mais R$%.2f pela quilometragem totalizando R$%.2f a ser pago.",qtd_dia*90,qtd_km*0.20,(qtd_dia*90)+(qtd_km*0.20));
    return 0;
}
