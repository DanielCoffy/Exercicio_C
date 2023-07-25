/******************************************************************************

Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos 
para todos, mas especialmente para mulheres. Faça um programa que leia nome, 
sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo 
que:
 - Homens ganham 5% de desconto
 - Mulheres ganham 13% de desconto

*******************************************************************************/

#include <stdio.h>

int main ()
{
    char nome[100];
    char sexo;
    float valor_compras, preco_com_desconto;

    printf("Digite o nome do cliente: ");
    gets(nome);

    printf("Digite o sexo do cliente (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite o valor total das compras: ");
    scanf("%f", &valor_compras);

    if (sexo == 'M' || sexo == 'm')
    {
        preco_com_desconto = valor_compras * 0.95; // Desconto de 5% para homens
    } 
    else if (sexo == 'F' || sexo == 'f')
    {
        preco_com_desconto = valor_compras * 0.87; // Desconto de 13% para mulheres
    } 
    else 
    {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
        return 1;
    }

    printf("Cliente: %s\n", nome);
    printf("Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
    printf("Valor total das compras: R$%.2f\n", valor_compras);
    printf("Preço com desconto: R$%.2f\n", preco_com_desconto);
   
  return 0;
}
