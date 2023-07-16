/******************************************************************************

 Faça um algoritmo que pergunte a distância que um passageiro deseja 
percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para 
viagens até 200Km e R$0.45 para viagens mais longas.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    float km;
    setlocale(LC_ALL,"");
    printf("Digite a kilometragem a ser percorrida: ");
    scanf("%f",&km);
    
    if (km>200)
    {
        printf("A kilometragem a ser percorrida é %.0f e o valor a ser pago é R$%.2f.",km,km*0.45); 
    }
    else
    {
        printf("A kilometragem a ser percorrida é %.0f e o valor a ser pago é R$%.2f.",km,km*0.5); 
    }

    return 0;
}
