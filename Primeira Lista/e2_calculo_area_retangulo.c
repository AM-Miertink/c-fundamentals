#include <stdio.h>
#include <stdlib.h>
// Calcular e exibir a área de um retângulo de lado (L) e altura (H).

int main()
{
    float lado, altura;

    printf("\n\tInsira o valor do LADO (L) do retangulo: ");
    scanf("%f", &lado);

    printf("\n\tInsira o valor da ALTURA (H) do retangulo: ");
    scanf("%f", &altura);

    printf("\n\tArea do retangulo: %f", (lado * altura));

    return 0;
}
