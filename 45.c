/******************************************************************************

O programa 44 vai ter um problema quando digitarmos o primeiro valor 
maior que o último. Resolva esse problema com um código que funcione em qualquer 
situação.

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
    if (valor_inicial <= valor_final) {
        while (valor_atual <= valor_final) {
            printf("%d ", valor_atual);
            valor_atual += incremento;
        }
    } else {
        while (valor_atual >= valor_final) {
            printf("%d ", valor_atual);
            valor_atual -= incremento;
        }
    }

    printf("Acabou!\n");

    return 0;
}
