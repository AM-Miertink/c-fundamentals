#include <stdio.h>
#include <stdlib.h>
// Calcular e exibir a área de um retângulo de lado (L) e altura (H).

int main()
{
    int lado, altura;

    printf("\n\tInsira o valor do LADO (L) do retangulo: ");
    scanf("%i", &lado);

    printf("\n\tInsira o valor da ALTURA (H) do retangulo: ");
    scanf("%i", &altura);

    printf("\n\tArea do retangulo: %i", (lado * altura));

    return 0;
}
