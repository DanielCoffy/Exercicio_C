/******************************************************************************
Escreva um programa que pergunte a velocidade de um carro. 
Caso ultrapasse de 80Km/h, exiba uma mensagem dizendo que o usuário foi multado.
Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida. 
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Digite a velocidade do condutor:\n");
    scanf("%d", &n);
   if (n<=80)
   {
        printf("O condutor está a %dKm/h e não excedeu a velocidade permitida.",n);   
   }
   else
   {
       printf("O condutor está a %dKm/h e excedeu o limite de 80Km/h em %dKm/h, sendo assim será multado em %d.",n,n-80,(n-80)*5);
   }
    
 
    return 0;
}
