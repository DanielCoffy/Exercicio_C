/******************************************************************************

[DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado 
Fibonacci() que recebe um único valor inteiro como parâmetro, indicando quantos 
termos da sequência serão mostrados na tela. O seu procedimento deve receber 
esse valor e mostrar a quantidade de elementos solicitados.
Obs: Use os exercícios 70 e 75 para te ajudar na solução
Ex: 
Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM
Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM

*******************************************************************************/

#include <stdio.h>

// Protótipo do procedimento Fibonacci
void Fibonacci(int n);

int main() {
    int n;

    printf("Digite a quantidade de termos da sequência de Fibonacci a serem gerados: ");
    scanf("%d", &n);

    // Chama o procedimento Fibonacci com o valor digitado
    Fibonacci(n);

    return 0;
}

// Implementação do procedimento Fibonacci
void Fibonacci(int n) {
    int termo1 = 1, termo2 = 1, proximoTermo;

    if (n < 2) {
        printf("Número de termos inválido.\n");
        return;
    }

    printf("Sequência de Fibonacci com %d termos:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d", termo1);

        if (i < n) {
            printf(" >> ");
        } else {
            printf(" >> FIM\n");
        }

        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }
}
