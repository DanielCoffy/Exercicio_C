/******************************************************************************

Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses 
valores para um procedimento Somador() que vai calcular e mostrar a soma entre 
eles.

*******************************************************************************/

#include <stdio.h>

// Declarando a função Somador
void Somador(int valor1, int valor2);

int main() {
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    // Chama a função Somador com os valores lidos
    Somador(num1, num2);

    return 0;
}

// Implementação da função Somador
void Somador(int valor1, int valor2) {
    int resultado = valor1 + valor2;
    printf("A soma de %d e %d é igual a %d\n", valor1, valor2, resultado);
}
