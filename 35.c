/******************************************************************************

Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O 
aluguel de um carro custa R$90 por dia para carro popular e R$150 por dia para 
carro de luxo. Além disso, o cliente paga por Km percorrido. Faça um programa
que leia o tipo de carro alugado (popular ou luxo), quantos dias de aluguel e 
quantos Km foram percorridos. No final mostre o preço a ser pago de acordo com a 
tabela a seguir:
 - Carros populares (aluguel de R$90 por dia)
 - Até 100Km percorridos: R$0,20 por Km
 - Acima de 100Km percorridos: R$0,10 por Km
 - Carros de luxo (aluguel de R$150 por dia)
 - Até 200Km percorridos: R$0,30 por Km
 - Acima de 200Km percorridos: R$0,25 por Km

*******************************************************************************/

#include <stdio.h>

int main() {
    char tipo_carro;
    int dias_aluguel;
    float km_percorridos, preco_total;

    printf("Bem-vindo ao serviço de aluguel de carros!\n");
    printf("Digite o tipo de carro (P para popular ou L para luxo): ");
    scanf(" %c", &tipo_carro);

    printf("Digite quantos dias de aluguel: ");
    scanf("%d", &dias_aluguel);

    printf("Digite quantos Km foram percorridos: ");
    scanf("%f", &km_percorridos);

    // Calcula o preço total do aluguel de acordo com o tipo de carro e os Km percorridos
    if (tipo_carro == 'P' || tipo_carro == 'p') {
        float preco_dia = 90.0;
        float preco_km;
        
        if (km_percorridos <= 100) {
            preco_km = 0.20;
        } else {
            preco_km = 0.10;
        }

        preco_total = (preco_dia * dias_aluguel) + (preco_km * km_percorridos);
    } else if (tipo_carro == 'L' || tipo_carro == 'l') {
        float preco_dia = 150.0;
        float preco_km;
        
        if (km_percorridos <= 200) {
            preco_km = 0.30;
        } else {
            preco_km = 0.25;
        }

        preco_total = (preco_dia * dias_aluguel) + (preco_km * km_percorridos);
    } else {
        printf("Tipo de carro inválido. Digite P para popular ou L para luxo.\n");
        return 1;
    }

    printf("O preço total a ser pago é: R$%.2f\n", preco_total);

    return 0;
}

