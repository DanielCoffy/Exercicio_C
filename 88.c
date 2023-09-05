/******************************************************************************

Crie um programa que melhore a função Gerador() da questão anterior 
para que mostre uma mensagem vário
Ex: Ao chamar Gerador("Aprendendo Lógica", 4) aparece:
+-------=======------+
 Aprendendo Lógica
 Aprendendo Lógica
 Aprendendo Lógica
 Aprendendo Lógica
+-------=======------+

*******************************************************************************/

#include <stdio.h>

void Gerador(const char *mensagem, int vezes) {
    printf("+-------=======------+\n");
    for (int i = 0; i < vezes; i++) 
    {
        printf(" %s\n", mensagem);
    }
    printf("+-------=======------+\n");
}

int main() {
    char mensagem[100]; // Uma matriz para armazenar a mensagem do usuário
    int vezes;

    printf("Digite uma mensagem: ");
    scanf("%99[^\n]", mensagem); // Lê a mensagem até encontrar uma quebra de linha

    printf("Digite quantas vezes deseja mostrar a mensagem: ");
    scanf("%d", &vezes); // Lê o número de vezes que a mensagem deve ser mostrada

    Gerador(mensagem, vezes); // Chama a função Gerador() com a mensagem e a quantidade de vezes

    return 0;
}
