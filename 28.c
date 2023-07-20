/******************************************************************************

Faça um programa que leia a largura e o comprimento de um terreno 
retangular, calculando e mostrando a sua área em m². O programa também 
devemostrar a classificação desse terreno, de acordo com a lista abaixo:
 - Abaixo de 100m² = TERRENO POPULAR
 - Entre 100m² e 500m² = TERRENO MASTER
 - Acima de 500m² = TERRENO VIP

*******************************************************************************/

#include <stdio.h>

int main ()
{
    float l,c;
    
    printf("Digite a largura e o comprimento do terreno:");
    scanf("%f%f",&l,&c);
    
    if (l*c < 100)
    {
        printf("O terreno tem %.1fm², sendo classificado como TERRENO POPULAR.",l*c);
    }
    else if ((l*c > 100) && (l*c < 500))
    {
        printf("O terreno tem %.1fm², sendo classificado como TERRENO MASTER.",l*c);
    }
    else
    {
        printf("O terreno tem %.1fm², sendo classificado como TERRENO VIP.",l*c);
    }
   
  return 0;
}
