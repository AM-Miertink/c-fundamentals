#include <stdio.h>
#include <stdlib.h>

// Calculadora de preço com input do usuário, feito por menu

int main()
{
    float preco, reajuste, total;
    int quantidade, opcao;

    // Dados de entrada para o menu
    printf("\t=== MENU ===\n");
    printf("\n\t1: para Acrescimo");
    printf("\n\t2: para Decrescimo");
    printf("\n\tSua opcao: ");
    scanf("%i", &opcao);

    // Tratamento de erro e segundo menu
    if (opcao < 1 || opcao > 2) {
        printf("ERRO: opcao invalida. Valor deve ser 1 ou 2\n");
    } else {
        printf("\n\t=== DADOS DA MERCADORIA ===");
        printf("\n\n\tPreco: R$ ");
        scanf("%f", &preco);
        printf("\tQuantidade (unidade): ");
        scanf("%i", &quantidade);
        printf("\tReajuste (%%): ");
        scanf("%f", &reajuste);

        // Tratamento de erro do segundo menu
        if (preco <= 0) {
            printf("\nERRO NO PRECO: valor deve ser maior que zero\n");
        } else if (quantidade <= 0) {
            printf("\nERRO NA QUANTIDADE: valor deve ser maior que zero\n");
        } else if (reajuste <= 0) {
            printf("\nERRO NO REAJUSTE: valor deve ser maior que zero\n");
        } else {
            total = preco * quantidade;
            if (opcao == 1) {
                total = total * (1 + reajuste / 100);
                printf("\n\tTotal (acrescimo de %.2f%%): R$ %.2f\n",  reajuste, total);
            } else {
                total = total * (1 - reajuste / 100);
                printf("\n\tTotal (desconto de %.2f%%): R$ %.2f\n",  reajuste, total);
            }
        }
    }

    return 0;
}
