#include <stdio.h>
#include "desafio4.h"

void preenche_array_d4(int v[], int tam) {
    for(int i = 0; i < tam; i++) {
        printf("Digite o valor para a posicao [%d]:\n", i);
        scanf("%d", &v[i]);
    }
}

int maiorElementoArray(int v[], int tam) {
    int maior = v[0];
    for (int i = 1; i < tam; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}