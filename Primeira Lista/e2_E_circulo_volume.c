/*
 * Calcular e exibir o volume em litros de uma esfera de Raio (R),
 * sabendo que o usuário deve informar o Raio (R) em metros.
 * Sabe-se que: VolumeEsfera = (4/3) * π * R³ e que 1 Litro é igual a 10^-3 m³.
 * Declarar o valor de π (PI = 3.14) como constante com o comando: #define.
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float raio = 0, volume = 0, litros = 0;

    // Input do tamanho
    printf("Digite o raio do circulo (m): ");
    scanf("%f", &raio);

    volume = (4.0 / 3.0) * PI * pow(raio, 3);
    litros = volume / pow(10, -3);

    printf("O volume da esfera e de %.fm3, ou seja, %.fL\n", volume, litros);

    return 0;
}
