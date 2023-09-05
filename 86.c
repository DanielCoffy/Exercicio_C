/******************************************************************************

Crie um programa que tenha um procedimento Gerador() que, quando chamado, 
mostre a mensagem "Olá, Mundo!" com algum componente visual (linhas)
Ex: Ao chamar Gerador() aparece:
+-------=======------+
 Olá, Mundo! 
+-------=======------+

*******************************************************************************/

#include <stdio.h>

void Gerador() {
    printf("+-------=======------+\n");
    printf(" Olá, Mundo!\n");
    printf("+-------=======------+\n");
}

int main() {
    Gerador(); // Chama a função Gerador() para exibir a mensagem

    return 0;
}
