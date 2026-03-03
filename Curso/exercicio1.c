// Exercício 1: Como ler do teclado sexo, idade, peso e altura do usuário?

#include <stdio.h>

int main()
{
    char genero = 'X';
    int idade = 0;
    float peso = 0, altura = 0;

    // Input do usuário
    printf("\nDigite seu genero (F/M): ");
    scanf("%c", &genero);

    printf("\nDigite sua idade: ");
    scanf("%i", &idade);

    printf("\nDigite seu peso em quilos: ");
    scanf("%f", &peso);

    printf("\nDigite sua altura em metros: ");
    scanf("%f", &altura);

    // Output para o usuário
    printf("\nGenero: %c \nIdade: %i anos \nPeso: %.2f kgs \nAltura: %.2fm\n", genero, idade, peso, altura);

    return 0;
}
