/***************************************************************************/
/* Exercício 7: Faça um programa para ler do teclado uma quantidade de     */
/* segundos e imprimir na tela a conversão para horas, minutos e segundos. */
/***************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos = 0, h = 0, m = 0, s = 0, resto = 0;

    printf("Digite quantos segundos devem ser convertidos: ");
    scanf("%d", &segundos);

    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("\n%d segundos equivalem a %d:%d:%d\n", segundos, h, m, s);

    return 0;
}
