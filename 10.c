/******************************************************************************
Faça um programa que leia a largura e a altura de uma parede,
calcule e mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
sabendo que cada litro de tinta pinta 2 metros quadrados.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float altura, comprimento,area, qtd;
    printf("******************************************************************************\n");
    printf("**********************CALCULADORA QUANTIDADE DE TINTA*************************\n");
    printf("******************************************************************************\n");
    printf("Digite a altura(m²):");
    scanf("%f",&altura);
    printf("Digite a comprimento(m²):");
    scanf("%f",&comprimento);
    area=comprimento*altura;
    qtd=area/2;
    printf("O tamanho da área a ser pintada é de %.2f mts².\n",area);
    printf("E são necessários %.02f Lts de tinta.",qtd);
    
    return 0;
}
