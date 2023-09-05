/******************************************************************************

Crie um programa que melhore a função Gerador() da questão anterior 
para que mostre uma mensagem personalizada, passada como parâmetro.
Ex: Ao chamar Gerador("Aprendendo Lógica") aparece:
+-------=======------+
 Aprendendo Lógica 
+-------=======------+

*******************************************************************************/

#include <stdio.h>

void Gerador(const char *mensagem) {
    printf("+-------=======------+\n");
    printf(" %s\n", mensagem);
    printf("+-------=======------+\n");
}

int main() {
    char mensagem[100]; // Uma matriz para armazenar a mensagem do usuário

    printf("Digite uma mensagem: ");
    scanf("%99[^\n]", mensagem); // Lê a mensagem até encontrar uma quebra de linha

    Gerador(mensagem); // Chama a função Gerador() com a mensagem inserida pelo usuário

    return 0;
}
