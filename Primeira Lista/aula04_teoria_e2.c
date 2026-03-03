#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Calculadora de média semestral seguindo metodologia UVV

int main()
{
    // Bimestres 1 e 2, Média Semestral, Prova Final
    float B1, B2, MS, PF;

    // Input das notas
    printf("\n\t=== Insira suas Notas ===\n\tNota [0.0, 10.0] - Bimestre 1: ");
    scanf("%f", &B1);
    printf("\tNota [0.0, 10.0] - Bimestre 2: ");
    scanf("%f", &B2);

    // Tratamento de erro do input
    if (B1 < 0 || B1 > 10) {
        printf("\n\tERRO NA NOTA DO BIMESTRE 1: valor deve ser entre 0 e 10.");
    } else if (B2 < 0 || B2 > 10) {
        printf("\n\tERRO NA NOTA DO BIMESTRE 2: valor deve ser entre 0 e 10.");
    } else {
        MS = round(((B1 + B2) / 2) * 10) / 10;
        printf("\n\tMedia Semestral: %.1f\n", MS);
        if (MS < 3) {
            printf("\tRESULTADO: Reprovado\n");
        } else if (MS <= 7) {
            // Cálculo da recuperação final
            printf("\tRESULTADO: Recuperacao");
            printf("\n\n\t=== Insira sua Nota ===\n\tNota [0.0, 10.0] - Prova Final: ");
            scanf("%f", &PF);
            // Tratamento de erro da prova final
            if (PF < 0 || PF > 10) {
                printf("\n\tERRO NA NOTA DA PROVA FINAL: valor deve ser entre 0 e 10.");
            } else {
                MS = round(((MS + PF) / 2) * 10) / 10;
                printf("\n\tMedia Final: %.1f\n", MS);
                if (MS < 5)
                    printf("\tRESULTADO: Reprovado\n");
                else
                    printf("\tRESULTADO: Aprovado\n");
            }
        } else {
            printf("\tRESULTADO: Aprovado\n");
        }
    }

    return 0;
}
