/******************************************************************************

Melhore o exercício 96, criando além da função Media() uma outra função 
chamada Situacao(), que vai retornar para o programa principal se o aluno está 
APROVADO, em RECUPERAÇÃO ou REPROVADO. Essa nova função, vai receber como 
parâmetro o resultado retornado pela função Media()

*******************************************************************************/

#include <stdio.h>

// Declara da função Media
float Media(float nota1, float nota2);

// Declara da função Situacao
void Situacao(float media);

int main() {
    float nota1, nota2, resultado;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Chama a função Media para calcular a média
    resultado = Media(nota1, nota2);

    printf("A média das notas é: %.2f\n", resultado);

    // Chama a função Situacao para determinar a situação do aluno
    Situacao(resultado);

    return 0;
}

// Implementação da função Media
float Media(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

// Implementação da função Situacao
void Situacao(float media) {
    if (media >= 7.0) {
        printf("Situação: APROVADO\n");
    } else if (media >= 5.0) {
        printf("Situação: RECUPERAÇÃO\n");
    } else {
        printf("Situação: REPROVADO\n");
    }
}
