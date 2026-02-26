// Calcular e exibir a hipotenusa (A) de um triângulo retângulo de catetos B e C

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float A, B, C;
    
    printf("Insira o valor do cateto B: ");
    scanf("%f", &B);
    printf("Insira o valor do cateto C: ");
    scanf("%f", &C);

    if (B <= 0 || C <= 0)
        printf("Valores devem ser maiores que zero.\n");
    else {
        A = sqrt((B * B) + (C * C));
        printf("A hipotenusa dos catetos %.2f e %.2f tem valor %.2f", B, C, A);
    }
  
    return 0;
}
