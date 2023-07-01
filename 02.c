/******************************************************************************
Escreva um programa que leia o nome de uma pessoa e mostre na tela a mensagem de boas vinda para ela.
Ex:
Qual é seu nome:João Silva
Olá, seja bem vindo João Silva!!
*******************************************************************************/

#include <stdio.h>

int main()
{
    char nome[100];
    printf("Qual é seu nome:\n");
    gets (nome);
    printf("Olá, seja bem vindo(a) %s!!",nome);

    return 0;
}
