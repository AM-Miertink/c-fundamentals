// Exercício 2: Trocar os valores de duas variáveis.

#include <stdio.h>

int main()
{
    int valor_1 = 0, valor_2 = 0, copia = 0;

    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &valor_1, &valor_2);

    copia = valor_1;
    valor_1 = valor_2;
    valor_2 = copia;

    printf("\nValor 1: %d\nValor 2: %d\n", valor_1, valor_2);

    return 0;
}
