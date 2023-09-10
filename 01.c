/******************************************************************************
Escreva um programa que mostre na tela a mensagem "Olá, Mundo!" 

*******************************************************************************/

#include <stdio.h>
#include <locale.h> //necessário para usar setlocale


int main()
{
    setlocale(LC_ALL, "");
    printf("Olá, mundo!");

    return 0;
}
