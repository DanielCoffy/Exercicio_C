/******************************************************************************

 O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no 
peso de uma pessoa. De acordo com o valor do IMC, podemos classificar o 
indivíduo dentro de certas faixas.
 - abaixo de 18.5: Abaixo do peso
 - entre 18.5 e 25: Peso ideal
 - entre 25 e 30: Sobrepeso
 - entre 30 e 40: Obesidade
 - acima de 40: Obseidade mórbida
Obs: O IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado 
da altura)

*******************************************************************************/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Calculadora de IMC - Índice de Massa Corpórea\n");
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    printf("Seu IMC é %.2f\n", imc);

    // Classifica o IMC
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Classificação: Peso ideal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Classificação: Sobrepeso\n");
    } else if (imc >= 30 && imc < 40) {
        printf("Classificação: Obesidade\n");
    } else {
        printf("Classificação: Obesidade mórbida\n");
    }

    return 0;
}

