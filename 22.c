/******************************************************************************

Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua 
situação em relação ao alistamento militar.
 - Se estiver antes dos 18 anos, mostre em quantos anos faltam para o 
alistamento.
 - Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do 
alistamento.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ano;
    printf("Digite o ano:\n");
    scanf("%d",&ano);
    if(2023-ano>18)
    {
        printf ("Você tem %d e já se passaram %d do alistamento.",2023-ano,(2023-ano)-18);
    }
    else
    {
         printf ("Você tem %d e faltam %d do alistamento.",2023-ano,18-(2023-ano));
    }
    return 0;
}
