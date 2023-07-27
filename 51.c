/******************************************************************************

Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela 
qual foi o maior e qual foi o menor preço digitados.


*******************************************************************************/

#include <stdio.h>

int main() {
    float preco;
    float maior_preco, menor_preco;

    printf("Digite o preco do 1º produto: ");
    scanf("%f", &preco);

    // Consideramos o primeiro valor como o maior e o menor inicialmente
    maior_preco = menor_preco = preco;

    for (int i = 2; i <= 8; i++) {
        printf("Digite o preco do %dº produto: ", i);
        scanf("%f", &preco);

        // Comparando os valores lidos com o maior e o menor atual
        if (preco > maior_preco) {
            maior_preco = preco;
        }
        if (preco < menor_preco) {
            menor_preco = preco;
        }
    }

    printf("Maior preco digitado: %.2f\n", maior_preco);
    printf("Menor preco digitado: %.2f\n", menor_preco);

    return 0;
}
