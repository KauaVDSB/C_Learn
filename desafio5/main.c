#include <stdio.h>
#include "desafio5.h"

int main(int argc, char ** argv) {
    int matriz[3][3];
    int simetrica;
    
    preenche_matriz_d5(matriz, 3);
    
    simetrica = verificaMatrizSimetrica(matriz, 3);
    
    if (simetrica == 1) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz NÃO é simétrica.\n");
    }
    
    return 0;
}