/******************************************************************************

Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e 
mostre na tela:
a) Quais foram os números sorteados
b) Quantos números estão acima de 5
c) Quantos números são divisíveis por 3

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros_sorteados[20];
    int acima_de_5 = 0, divisiveis_por_3 = 0;
    int contador = 0;

    // Inicializando a semente para geração de números aleatórios
    srand(time(NULL));

    // Sorteando os números e verificando as condições
    printf("Números sorteados: ");
    while (contador < 20) {
        numeros_sorteados[contador] = rand() % 11;
        printf("%d ", numeros_sorteados[contador]);

        if (numeros_sorteados[contador] > 5) {
            acima_de_5++;
        }

        if (numeros_sorteados[contador] % 3 == 0) {
            divisiveis_por_3++;
        }

        contador++;
    }

    // Exibindo o resultado
    printf("\nQuantidade de números acima de 5: %d\n", acima_de_5);
    printf("Quantidade de números divisíveis por 3: %d\n", divisiveis_por_3);

    return 0;
}
