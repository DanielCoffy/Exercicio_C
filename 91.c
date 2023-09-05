/******************************************************************************

Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses 
valores para uma função Maior() que vai verificar qual deles é o maior e 
mostrá-lo na tela. Caso os dois valores sejam iguais, mostrar uma mensagem 
informando essa característica.

*******************************************************************************/

#include <stdio.h>

// Declaro a função Maior
void Maior(int valor1, int valor2);

int main() {
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    // Chama a função Maior com os valores lidos
    Maior(num1, num2);

    return 0;
}

// Implementação da função Maior
void Maior(int valor1, int valor2) {
    if (valor1 > valor2) {
        printf("O maior valor é: %d\n", valor1);
    } else if (valor2 > valor1) {
        printf("O maior valor é: %d\n", valor2);
    } else {
        printf("Os valores são iguais.\n");
    }
}
