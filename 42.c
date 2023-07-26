/******************************************************************************

 Faça um algoritmo que pergunte ao usuário um número inteiro e positivo 
qualquer e mostre uma contagem até esse valor:
Ex: Digite um valor: 35
Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou!

*******************************************************************************/

#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("O valor precisa ser inteiro e positivo.\n");
        return 1;
    }

    int contagem = 1;
    while (contagem <= valor) {
        printf("%d ", contagem);
        contagem++;
    }

    printf("Acabou!\n");

    return 0;
}
