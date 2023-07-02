/******************************************************************************
[DESAFIO] Crie um programa para calcular a redução de tempo de um fumante.
Considere que o fumante perde 10min de vida a cada cigarro.
Calcule quantos dias de vida perderá e exiba na tela.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float qtd_cigdia, qtd_anos;
    printf("Digite quantos cigarros fuma por dia e a quantos anos fuma:\n");
    scanf("%f %f", &qtd_cigdia, &qtd_anos);
    //float horasfu= (qtd_cigdia*10)/60;
    //float diasperd= (horasfu*365)/24;
    float diasperd= (((qtd_cigdia*10)/60)*365)/24;
    printf ("Com %.0f cigarros fumados por dia  durante %.0f anos.\n",qtd_cigdia,qtd_anos);
    printf("Você perderá  %.2f  dias de vida!",diasperd);
    
 
    return 0;
}
