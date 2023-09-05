/******************************************************************************

Crie uma lógica que leia um número inteiro e passe para um procedimento
ParOuImpar() que vai verificar e mostrar na tela se o valor passado como 
parâmetro é PAR ou ÍMPAR.

*******************************************************************************/

#include <stdio.h>

// Declaro a função ParOuImpar
void ParOuImpar(int numero);

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Chama a função ParOuImpar com o número lido
    ParOuImpar(num);

    return 0;
}

// Implementação da função ParOuImpar
void ParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("%d é um número PAR.\n", numero);
    } else {
        printf("%d é um número ÍMPAR.\n", numero);
    }
}
