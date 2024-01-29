#include <cstdlib>
#include <iostream>


int main(int argc, char *argv[])
{
   #include <stdio.h>

    float vet_01[5], vet_02[5], vet_res[5];

    printf("Digite 5 valores reais para o vetor");
    for (int i = 0; i < 5; ++i) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vet_01[i]);
    }


    printf("\nDigite 5 valores reais para o segundo vetor);
    for (int i = 0; i < 5; ++i) {
        printf("Digite o valor", i + 1);
        scanf("%f", &vet_02[i]);
    }


    for (int i = 0; i < 5; i += 2) {
        vet_01[i] *= 3;
    }


    for (int i = 1; i < 5; i += 2) {
        vet_02[i] *= 4;
    }

    for (int i = 0; i < 5; ++i) {
        vet_res[i] = vet_01[i] + vet_02[i];
    }


    float maior = vet_res[0], menor = vet_res[0];
    int posMaior = 0, posMenor = 0;
    for (int i = 1; i < 5; ++i) {
        if (vet_res[i] > maior) {
            maior = vet_res[i];
            posMaior = i;
        }
        if (vet_res[i] < menor) {
            menor = vet_res[i];
            posMenor = i;
        }
    }

    int countPositivos = 0, countNegativos = 0;
    for (int i = 0; i < 5; ++i) {
        if (vet_res[i] > 0) {
            countPositivos++;
        } else if (vet_res[i] < 0) {
            countNegativos++;
        }
    }

    printf("\nResultados:\n");
    printf("Maior valor: %.2f (Posição: %d)\n", maior, posMaior);
    printf("Menor valor: %.2f (Posição: %d)\n", menor, posMenor);
    printf("Quantidade de números positivos: %d\n", countPositivos);
    printf("Quantidade de números negativos: %d\n", countNegativos);
    printf("Vetor resultante:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%.2f ", vet_res[i]);
    }

    return 0;
}
