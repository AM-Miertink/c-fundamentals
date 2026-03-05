// Calcular e exibir a área de um retângulo de lado (L) e altura (H). Área = L * H.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado = 0, altura = 0;

    printf("Digite o tamanho do lado do retangulo (cm): ");
    scanf("%f", &lado);
    printf("Digite o tamanho da altura do retangulo (cm): ");
    scanf("%f", &altura);

    printf("\nSeu retangulo tem area de %.f cm.\n", lado * altura);

    return 0;
}
