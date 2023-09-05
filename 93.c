/******************************************************************************

Faça um programa que tenha um procedimento chamado Contador() que recebe 
três valores como parâmetro: o início, o fim e o incremento de uma contagem. O
programa principal deve solicitar a digitação desses valores e passá-los ao 
procedimento, que vai mostrar a contagem na tela.
Ex: Para os valores de início (4), fim (20) e incremento(3) teremos
Contador(4, 20, 3) vai mostrar na tela 4 >> 7 >> 10 >> 13 >> 16 >> 19 >> FIM

*******************************************************************************/

#include <stdio.h>

// Declaro a função Contador
void Contador(int inicio, int fim, int incremento);

int main() {
    int inicio, fim, incremento;

    printf("Digite o valor de início: ");
    scanf("%d", &inicio);

    printf("Digite o valor de fim: ");
    scanf("%d", &fim);

    printf("Digite o valor do incremento: ");
    scanf("%d", &incremento);

    // Chama a função Contador com os valores lidos
    Contador(inicio, fim, incremento);

    return 0;
}

// Implementação da função Contador
void Contador(int inicio, int fim, int incremento) {
    if (inicio > fim || incremento <= 0) {
        printf("Valores de entrada inválidos.\n");
        return;
    }

    for (int i = inicio; i <= fim; i += incremento) {
        printf("%d", i);

        if (i + incremento <= fim) {
            printf(" >> ");
        } else {
            printf(" >> FIM\n");
        }
    }
}
