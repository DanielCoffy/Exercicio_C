/******************************************************************************

Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários. 
No final, mostre o total de salários pagos aos homens e o total pago às 
mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não 
sempre que ler os dados de um funcionário.

*******************************************************************************/

#include <stdio.h>

int main() {
    char sexo;
    float salario, totalSalariosHomens = 0, totalSalariosMulheres = 0;
    char continuar;

    do {
        printf("Digite o sexo do funcionário (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite o salário do funcionário: ");
        scanf("%f", &salario);

        if (sexo == 'M' || sexo == 'm') {
            totalSalariosHomens += salario;
        } else if (sexo == 'F' || sexo == 'f') {
            totalSalariosMulheres += salario;
        } else {
            printf("Sexo inválido. Digite M ou F.\n");
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("Total de salários pagos aos homens: R$ %.2f\n", totalSalariosHomens);
    printf("Total de salários pagos às mulheres: R$ %.2f\n", totalSalariosMulheres);

    return 0;
}
