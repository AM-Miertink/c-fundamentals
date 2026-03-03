// Exercício 3: Trocar os valores de duas variáveis sem usar uma variável auxiliar.

#include <stdio.h>

int main()
{
    int valor_1 = 0, valor_2 = 0, copia = 0;

    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &valor_1, &valor_2);

    /*
    Por exemplo: se houve input dos valores 10 e 15.
    * A primeira linha muda valor_1 de 10 para 25 = (10 + 15).
    * A segunda linha pega o novo valor_1 (25) e muda o
    * valor_2 de 15 para 10.
    * A terceira linha pega as duas variáveis com novos valores
    * e volta com os valores originais invertidos.
    */
    valor_1 = valor_1 + valor_2;
    valor_2 = valor_1 - valor_2;
    valor_1 = valor_1 - valor_2;

    printf("\nValor 1: %d\nValor 2: %d\n", valor_1, valor_2);

    return 0;
}
