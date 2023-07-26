/******************************************************************************

Crie um algoritmo que leia o valor inicial da contagem, o valor final e o 
incremento, mostrando em seguida todos os valores no intervalo:
Ex: Digite o primeiro Valor: 3
Digite o último Valor: 10
Digite o incremento: 2
Contagem: 3 5 7 9 Acabou!

*******************************************************************************/

#include <stdio.h>

int main() {
    int valor_inicial, valor_final, incremento;

    printf("Digite o primeiro Valor: ");
    scanf("%d", &valor_inicial);

    printf("Digite o último Valor: ");
    scanf("%d", &valor_final);

    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    if (incremento <= 0) {
        printf("O incremento deve ser maior que zero.\n");
        return 1;
    }

    printf("Contagem: ");
    int valor_atual = valor_inicial;
    while (valor_atual <= valor_final) {
        printf("%d ", valor_atual);
        valor_atual += incremento;
    }

    printf("Acabou!\n");

    return 0;
}
