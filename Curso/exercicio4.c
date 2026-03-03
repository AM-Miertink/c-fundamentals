/******************************************************************/
/* Exercício 4: Escreva um programa que leia um valor de despesa  */
/* de restaurante, o valor da gorjeta (em porcentagem) e o número */
/* de pessoas para dividir a conta. Imprima o valor que cada um   */
/* deve pagar. Assuma que a conta será dividida igualmente.       */
/******************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_conta = 0, gorjeta = 0;
    int num_pessoas = 0;

    // Pega os valores da despesa, gorjeta, e nº de pessoas
    printf("Digite o valor da despesa: ");
    scanf("%f", &valor_conta);

    printf("Digite o valor da gorjeta (%%): ");
    scanf("%f", &gorjeta);

    printf("Digite o numero de pessoas a dividir: ");
    scanf("%d", &num_pessoas);

    // Cálculo e impressão
    valor_conta = valor_conta + (valor_conta * (gorjeta / 100));

    printf("\nO valor total e de R$%.2f.\n", valor_conta);
    printf("O valor por pessoa e de R$%.2f.\n", valor_conta / num_pessoas);
    
    return 0;
}
