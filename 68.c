/******************************************************************************

Crie um programa que leia sexo e peso de 8 pessoas. No final, mostre na tela:
a) Quantas mulheres foram cadastradas
b) Quantos homens pesam mais de 100Kg
c) A média de peso entre as mulheres 
d) O maior peso entre os homens

*******************************************************************************/

#include <stdio.h>

int main() {
    int homens_acima_100kg = 0;
    int total_mulheres = 0;
    float soma_peso_mulheres = 0.0;
    float maior_peso_homem = 0.0;

    for (int i = 1; i <= 8; i++) {
        char sexo;
        float peso;

        printf("Digite o sexo (M/F) da pessoa %d: ", i);
        scanf(" %c", &sexo);

        printf("Digite o peso (em Kg) da pessoa %d: ", i);
        scanf("%f", &peso);

        if (sexo == 'F' || sexo == 'f') {
            total_mulheres++;
            soma_peso_mulheres += peso;
        } else if (sexo == 'M' || sexo == 'm') {
            if (peso > maior_peso_homem) {
                maior_peso_homem = peso;
            }
            if (peso > 100.0) {
                homens_acima_100kg++;
            }
        } else {
            printf("Sexo inválido. Digite M ou F.\n");
            i--; // Repetir a leitura da pessoa atual
        }
    }

    float media_peso_mulheres = soma_peso_mulheres / total_mulheres;

    printf("Quantidade de mulheres cadastradas: %d\n", total_mulheres);
    printf("Quantidade de homens com mais de 100Kg: %d\n", homens_acima_100kg);
    printf("Média de peso entre as mulheres: %.2f Kg\n", media_peso_mulheres);
    printf("Maior peso entre os homens: %.2f Kg\n", maior_peso_homem);

    return 0;
}
