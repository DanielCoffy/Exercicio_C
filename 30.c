/******************************************************************************

Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo 
de triângulo será formado: 
 - EQUILÁTERO: todos os lados iguais
 - ISÓSCELES: dois lados iguais
 - ESCALENO: todos os lados diferentes

*******************************************************************************/

#include <stdio.h>

int main() {
    double lado1, lado2, lado3;

    printf("Digite o tamanho do primeiro lado: ");
    scanf("%lf", &lado1);

    printf("Digite o tamanho do segundo lado: ");
    scanf("%lf", &lado2);

    printf("Digite o tamanho do terceiro lado: ");
    scanf("%lf", &lado3);

    // Verificando a condição para formação do triângulo
    if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)) {
        // Verificando o tipo de triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("É possível formar um triângulo EQUILÁTERO.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("É possível formar um triângulo ISÓSCELES.\n");
        } else {
            printf("É possível formar um triângulo ESCALENO.\n");
        }
    } else {
        printf("Não é possível formar um triângulo com os segmentos de reta fornecidos.\n");
    }

    return 0;
}
