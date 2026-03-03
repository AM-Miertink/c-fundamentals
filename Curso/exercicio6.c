/****************************************************************************/
/* Exercício 6: Crie um programa em C que permita fazer a conversão cambial */
/* entre Reais e Dólares. Considere como taxa de câmbio US$1,0 = R$5,30.    */
/* Leia um valor em Reais e mostre o correspondente em Dólares.             */
/****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais = 0, dolares = 0;

    // Versão alternativa com o usuário fazendo input da cotação
    printf("Digite o valor em reais a ser convertido em dolar: R$");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar: $1 = R$");
    scanf("%f", &dolares);

    // Cálculo do câmbio e impressão
    dolares = reais / dolares;
    printf("\nO valor de R$%.2f corresponde a $%.2f\n", reais, dolares);

    return 0;
}
