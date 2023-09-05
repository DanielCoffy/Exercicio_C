/******************************************************************************

Crie um programa que melhore a função Gerador() da questão anterior 
para que o programador possa escolher uma entre três bordas:
 +-------=======------+ Borda 1
 ~~~~~~~~:::::::~~~~~~~ Borda 2
 <<<<<<<<------->>>>>>> Borda 3
Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2)
~~~~~~~~:::::::~~~~~~~
 Portugol Studio
 Portugol Studio
 Portugol Studio
~~~~~~~~:::::::~~~~~~~

*******************************************************************************/

#include <stdio.h>

void ImprimirBorda(int tipoBorda) {
    if (tipoBorda == 1) {
        printf("+-------=======------+\n");
    } else if (tipoBorda == 2) {
        printf("~~~~~~~~:::::::~~~~~~~\n");
    } else if (tipoBorda == 3) {
        printf("<<<<<<<<------->>>>>>>\n");
    } else {
        printf("Tipo de borda inválido.\n");
    }
}

void Gerador(const char *mensagem, int vezes, int tipoBorda) {
    ImprimirBorda(tipoBorda); // Chama a função ImprimirBorda com o tipo de borda escolhido
    for (int i = 0; i < vezes; i++) {
        printf("%s\n", mensagem);
    }
    ImprimirBorda(tipoBorda); // Chama a função ImprimirBorda com o tipo de borda escolhido

}

int main() {
    char mensagem[100]; // Uma matriz para armazenar a mensagem do usuário
    int vezes, tipoBorda;

    printf("Digite uma mensagem: ");
    scanf("%99[^\n]", mensagem); // Lê a mensagem até encontrar uma quebra de linha

    printf("Digite quantas vezes deseja mostrar a mensagem: ");
    scanf("%d", &vezes); // Lê o número de vezes que a mensagem deve ser mostrada

    printf("Escolha o tipo de borda (1, 2 ou 3):\n");
    printf("Borda 1: +-------=======------\n");
    printf("Borda 2: ~~~~~~~~:::::::~~~~~~~\n");
    printf("Borda 3: <<<<<<<<------->>>>>>>\n");
    scanf("%d", &tipoBorda); // Lê o tipo de borda escolhido pelo usuário

    Gerador(mensagem, vezes, tipoBorda); // Chama a função Gerador() com a mensagem, a quantidade de vezes e o tipo de borda

    return 0;
}
