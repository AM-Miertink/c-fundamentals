// SELEÇÃO MÚLTIPLA: switch

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco = 0, reajuste = 0, total = 0;
    int quantidade = 0, opcao = 0;

    // Input de informações
    printf("=== Dados da Mercadoria ===\n");
    printf("Preco: R$");
    scanf("%f", &preco);
    printf("Quantidade (unidades): ");
    scanf("%d", &quantidade);
    printf("Reajuste (%%): ");
    scanf("%f", &reajuste);

    // Testa erros de input
    if (preco <= 0) {
        printf("Erro no PRECO. Valor deve ser maior que zero.\n");
    } else if (quantidade <= 0) {
        printf("Erro na QUANTIDADE. Valor deve ser maior que zero.\n");
    } else if (reajuste <= 0) {
        printf("Erro no REAJUSTE. Valor deve ser maior que zero.\n");
    } else {
        // Menu de seleção de desconto ou acréscimo
        printf("\n=== MENU ===");
        printf("\n1: para Acrescimo");
        printf("\n2: para Decrescimo");
        printf("\nSua opcao: ");
        scanf("%d", &opcao);

        total = preco * quantidade;
        printf("\nTotal (sem reajuste) = R$%.2f.", total);

        // Cálculo de reajuste e exibição de valor total
        switch (opcao) {
        case 1:
            total = total * (1 + reajuste / 100);
            printf("\nTotal (acrescimo de %.2f%%): R$ %.2f.\n", reajuste, total);
            break;
        case 2:
            total = total * (1 - reajuste / 100);
            printf("\nTotal (desconto de %.2f%%): R$ %.2f.\n", reajuste, total);
            break;
        default:
            printf("Erro na OPCAO. Valor deve ser 1 ou 2.\n");
        }
    }

  return 0;
}
