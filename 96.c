/******************************************************************************

Crie um programa que tenha uma função Media(), que vai receber as 2 notas de 
um aluno e retornar a sua média para o programa principal.

*******************************************************************************/

#include <stdio.h>

// Protótipo da função Media
float Media(float nota1, float nota2);

int main() {
    float nota1, nota2, resultado;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Chama a função Media para calcular a média
    resultado = Media(nota1, nota2);

    printf("A média das notas é: %.2f\n", resultado);

    return 0;
}

// Implementação da função Media
float Media(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}
