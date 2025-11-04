#include <stdio.h>
#include "desafio5.h"

void preenche_matriz_d5(int m[][3], int q_xy) {
    for (int i=0; i < q_xy; i++) {
        for (int j = 0; j < q_xy; j++) {
            printf("Preencha o valor da matriz na posição [%d][%d]:\n", i, j);
            scanf(" %d", &m[i][j]);
        }
    }
}

int verificaMatrizSimetrica(int m[][3], int q_xy) {
    for (int i = 0; i < q_xy; i++) {
        for (int j = 0; j < q_xy; j++) {
            if (m[i][j] != m[j][i]) {
                return 0; 
            }
        }
    }
    return 1;
}