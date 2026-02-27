#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    // Input do usuário, incluindo uma tentativa inicial de tratamento de erro
    printf("\n\tDigite seu sexo (F ou M), idade, peso e altura, sem virgula: ");
    printf("\n\tPor exemplo: M 18 70 1.80\n");
    scanf("%c %i %.2f %.2f", &sexo, &idade, &peso, &altura);

    // Mostra o resultado para o usuário
    printf("\n\tSexo: %c \n\tIdade: %i \n\tPeso: %f \n\tAltura: %f", sexo, idade, peso, altura);

    return 0;
}
