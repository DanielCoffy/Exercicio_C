/******************************************************************************

Faça um programa que possua uma função chamada Potencia(), que vai receber 
dois parâmetros numéricos (base e expoente) e vai calcular o resultado da 
exponenciação.
Ex: Potencia(5,2) vai calcular 52 = 25

*******************************************************************************/

#include <stdio.h>

// Declara a função Potencia
int Potencia(int base, int expoente);

int main() {
    int base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    // Chama a função Potencia para calcular a exponenciação
    resultado = Potencia(base, expoente);

    printf("%d^%d = %d\n", base, expoente, resultado);

    return 0;
}

// Implementação da função Potencia
int Potencia(int base, int expoente) {
    int resultado = 1;

    // Calcula a exponenciação usando um loop
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}
