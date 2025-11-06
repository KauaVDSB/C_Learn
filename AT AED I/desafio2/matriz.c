#include <stdio.h>
#include "matriz.h"

void preenche_matriz(int m[][3], int x, int y) {
    for (int i=0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("Preencha o valor da matriz na posição [%d][%d]:\n", i, j);
            scanf(" %d", &m[i][j]);
        }
    }
}

void mostra_matriz(int m[][3], int x, int y) {
    for (int i=0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            if (j == x - 1) {
                printf("[%d]\n", m[i][j]);
            } else {
                printf("[%d] ", m[i][j]);
            }
        }
    }
    printf("\n\n");

    return;
}

void multiplica_matriz(int m1[][3], int x1, int y1, int m2[][3], int y2, int x2, int m_res[][3]) {
    if (x1 != y2) {
        printf("Matrizes inválidas para comparação.\n");
        return;
    }

    for (int i = 0; i < y1; i++) {
        for (int j = 0; j < x2; j++) {

            m_res[i][j] = 0;

            for (int k = 0; k < x1; k++) {
                m_res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}