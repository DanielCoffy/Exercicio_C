/******************************************************************************

Crie um programa que tenha uma função SuperSomador(), que vai receber dois 
números como parâmetro e depois vai retornar a soma de todos os valores no 
intervalo entre os valores recebidos.
Ex: 
SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai retornar 21
SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85

*******************************************************************************/

#include <stdio.h>

// Declara a função SuperSomador
int SuperSomador(int inicio, int fim);

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Chama a função SuperSomador para calcular a soma no intervalo
    resultado = SuperSomador(num1, num2);

    printf("A soma no intervalo entre %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}

// Implementação da função SuperSomador
int SuperSomador(int inicio, int fim) {
    int soma = 0;

    // Percorre todos os valores no intervalo e os soma
    for (int i = inicio; i <= fim; i++) {
        soma += i;
    }

    return soma;
}
