/******************************************************************************

 Uma empresa precisa reajustar o salário dos seus funcionários, dando um 
aumento de acordo com alguns fatores. Faça um programa que leia o salário atual, 
o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa. 
No final, mostre o seu novo salário, baseado na tabela a seguir:
- Mulheres
 - menos de 15 anos de empresa: +5%
 - de 15 até 20 anos de empresa: +12%
 - mais de 20 anos de empresa: +23%
- Homens
 - menos de 20 anos de empresa: +3%
 - de 20 até 30 anos de empresa: +13%
 - mais de 30 anos de empresa: +25%

*******************************************************************************/

#include <stdio.h>

int main() {
    float salario_atual, novo_salario;
    char genero;
    int anos_empresa;

    printf("Bem-vindo ao reajuste de salário da empresa!\n");
    printf("Digite o salário atual do funcionário: R$");
    scanf("%f", &salario_atual);

    printf("Digite o gênero do funcionário (M para masculino ou F para feminino): ");
    scanf(" %c", &genero);

    printf("Digite há quantos anos o funcionário trabalha na empresa: ");
    scanf("%d", &anos_empresa);

    if (genero == 'F' || genero == 'f') {
        if (anos_empresa < 15) {
            novo_salario = salario_atual * 1.05;
        } else if (anos_empresa >= 15 && anos_empresa <= 20) {
            novo_salario = salario_atual * 1.12;
        } else {
            novo_salario = salario_atual * 1.23;
        }
    } else if (genero == 'M' || genero == 'm') {
        if (anos_empresa < 20) {
            novo_salario = salario_atual * 1.03;
        } else if (anos_empresa >= 20 && anos_empresa <= 30) {
            novo_salario = salario_atual * 1.13;
        } else {
            novo_salario = salario_atual * 1.25;
        }
    } else {
        printf("Gênero inválido. Digite M para masculino ou F para feminino.\n");
        return 1;
    }

    printf("O novo salário do funcionário é: R$%.2f\n", novo_salario);

    return 0;
}
