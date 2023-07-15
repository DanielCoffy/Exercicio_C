/******************************************************************************

Desenvolva uma lágica que leia os valores A,B e C de uma equação de segundo grau e mostre o valor do Delta.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
int main()
{
    setlocale(LC_ALL,"");
    float a, b, c, delta, x1, x2;
 
    printf("f(x) = ax² + bx + c\n\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
 
    system("cls");
    printf("\nf(x) = %8.2fx² + %8.2fx + %8.2f\n", a, b, c);
 
    delta = b*b - 4 * a * c;
 
    if(delta < 0)
    {
        printf("\nDELTA = %8.2f\nNão possui raízes reais!\n\n", delta);
    }
    else
    {
        if(delta == 0)
        {
            x1 = -b / (2 * a);
            printf("\nDELTA = %8.2f \nx'   = %8.2f\n\n", delta, x1);
        }
        else
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("\nDELTA = %8.2f \nx'   = %8.2f\nx''  = %8.2f\n\n", delta, x1, x2);
        }
    }
     return 0;
}
