#include <stdio.h>
#include "matriz.h"

void preencheMatriz(int m[][3], int q_x){
    for(int i=0; i < q_x; i++) {
        for(int j=0; j < 3; j++) {
            printf("Preencha a matriz na coordenada [%d][%d]:\n", i, j);
            scanf("%d", &m[i][j]);
        }
    }   
}

void mostraMatriz(int m[][3], int q_x) {
    for(int i=0; i < q_x; i++) {
        for(int j=0; j < 3; j++) {
            if (j != 2) {
                printf("[%d]", m[i][j]);
            } else{
                printf("[%d]\n", m[i][j]);
            }
        }
    }
}

int somaDiagonalPrincipalMatriz(int m[][3], int q_xy) {
    int soma = 0;
    for(int i=0; i < q_xy; i++) {
        soma = soma + m[i][i];
    }
    return soma;
}

int somaDiagonalSecundariaMatriz(int m[][3], int q_xy) {
    int soma = 0;
    for(int i=0; i < q_xy; i++) {
        int j = q_xy - 1 - i;
        soma = soma + m[i][j];
    }
    return soma;
}