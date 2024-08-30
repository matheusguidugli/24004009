#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char nomeProduto[50];
    int quantidade;
    float precoUnitario, valorTotal;
    float valorTotalDia;
    char continuar;

    do {

        printf("Digite o nome do produto: ");
        scanf("%50s", nomeProduto);


        printf("Digite a quantidade vendida: ");
        scanf("%d", &quantidade);


        printf("Digite o preco unitario do produto: ");
        scanf("%f", &precoUnitario);


        valorTotal = quantidade * precoUnitario;


        valorTotalDia += valorTotal;


        printf("Valor total da venda de %s: %.2f\n", nomeProduto, valorTotal);


        printf("Deseja registrar outra venda? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');


    printf("Valor total arrecadado no dia: %.2f\n", valorTotalDia);

    return 0;
}
