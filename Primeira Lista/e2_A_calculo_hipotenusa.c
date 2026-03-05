// Calcular e exibir a hipotenusa (A) de um triângulo retângulo de catetos B e C

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float B, C;

    // Input dos catetos
    printf("\t\nInsira o valor do cateto B: ");
    scanf("%f", &B);
    
    printf("\t\nInsira o valor do cateto C: ");
    scanf("%f", &C);

    // Verificação de tamanho mínimo e cálculo
    if (B <= 0 || C <= 0)
        printf("\t\nValores devem ser maiores que zero.\n");
    else
        A = sqrt((B * B) + (C * C));
        printf("\t\nA hipotenusa dos catetos %.2f e %.2f tem valor %.2f", B, C, (B * C));
  
    return 0;
}
