#include <stdio.h>
#include "desafio7.h"

void preenche_array_d7(int v[], int tam) {
    for(int i = 0; i < tam; i++) {
        printf("Digite o valor para a posicao [%d]:\n", i);
        scanf("%d", &v[i]);
    }
}

int somaArray(int v[], int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += v[i];
    }
    return soma;
}