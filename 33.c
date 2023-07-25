/******************************************************************************

 Escreva um programa para aprovar ou não o empréstimo bancário para a compra 
de uma casa. O programa vai perguntar o valor da casa, o salário do comprador e 
em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que 
ela não pode exceder 30% do salário ou então o empréstimo será negado.

*******************************************************************************/

#include <stdio.h>

int main() {
    float valor_casa, salario_comprador, prestacao_mensal;
    int anos_prazo;

    printf("Bem-vindo ao simulador de empréstimo para compra de casa!\n");
    printf("Digite o valor da casa: R$");
    scanf("%f", &valor_casa);

    printf("Digite o salário do comprador: R$");
    scanf("%f", &salario_comprador);

    printf("Digite em quantos anos será feito o pagamento: ");
    scanf("%d", &anos_prazo);

    // Calcula o valor da prestação mensal
    prestacao_mensal = valor_casa / (anos_prazo * 12);

    // Verifica se a prestação mensal excede 30% do salário
    if (prestacao_mensal > salario_comprador * 0.3) {
        printf("Empréstimo negado. O valor da prestação excede 30%% do salário.\n");
    } else {
        printf("Empréstimo aprovado!\n");
        printf("Valor da prestação mensal: R$%.2f\n", prestacao_mensal);
    }

    return 0;
}
