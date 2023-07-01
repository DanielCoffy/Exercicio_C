/******************************************************************************
Desenvolva um programa que leia uma distância em metros e mostre os valores relativos em outras medidas
EX:
Digite  uma distância em metros:185.72
A distânca de 185.72 corresponde a:
0.18572Km
1.8572Hm
18.572Dam
1857.2dm
18572.0cm
185720.0mm
*******************************************************************************/

#include <stdio.h>

int main()
{
    float n;
    printf("Digite a distância em metros:");
    scanf("%f",&n);
    printf("A distância de %.1fm corresponde a:\n",n);
    printf("%fKm\n",n/1000);
    printf("%fHm\n",n/100);
    printf("%fDam\n",n/10);
    printf("%fdm\n",n*10);
    printf("%fcm\n",n*100);
    printf("%fmm\n",n*1000);
    return 0;
}
