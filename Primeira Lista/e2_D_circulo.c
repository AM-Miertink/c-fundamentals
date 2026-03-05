/*
 * Calcular e exibir a área e o comprimento de um círculo de Raio (R),
 * sabendo que, Area = π * R2 e Comprimento = 2 * π * R.
 * Declarar o valor de π (PI = 3.14) como constante com comando: #define.
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float raio = 0;

    // Input do tamanho
    printf("Digite o raio do circulo (cm): ");
    scanf("%f", &raio);

    // Tratamento de erro e exibição
    if (raio <= 0)
        printf("Erro: valor deve ser maior que zero.\n");
    else
        printf("Seu circulo tem area de %.2fcm^2 e comprimento de %.2f cm.\n", PI * pow(raio, 2), 2 * PI * raio);

    return 0;
}
