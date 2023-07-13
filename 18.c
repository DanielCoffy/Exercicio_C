/******************************************************************************

Faça um programa que leia o ano de nascimento e mostre na tela se ela pode ou não votar.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ano;

    printf("Digite o ano de nascimento:\n");
    scanf("%d",&ano);
    int idade=2023-ano;
    if (idade<18)
    {
        printf("Não pode votar.\n");
    }
    else
    {
         printf("Pode votar.\n");
    }

    return 0;
}
