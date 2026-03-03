/**********************************************************************/
/* Exercício 5: Uma empresa contrata um encanador a R$ 45,00 por dia. */
/* Faça um programa que solicite o número de dias trabalhados pelo    */
/* encanador e imprima a quantia líquida que deverá ser paga,         */
/* sabendo que são descontados 8% para imposto de renda.              */
/**********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define CUSTO_DIARIO 45.00

int main()
{
    float total_liquido = 0;
    int qtd_Dias = 0;

    // Input
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &qtd_Dias);

    // Cálculo e Output
    total_liquido = qtd_Dias * CUSTO_DIARIO;
    total_liquido = total_liquido - total_liquido * 0.08;

    printf("\nO valor liquido e de R$%.2f por %i dias.\n", total_liquido, qtd_Dias);

    return 0;
}
