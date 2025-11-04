#include <stdio.h>
#include "matriz.h"

int main(int argc, char * argv) {
    int matriz_quadrada[3][3];
    int soma_principal, soma_secundaria, soma_ambas;

    preencheMatriz(matriz_quadrada, 3);
    mostraMatriz(matriz_quadrada, 3);
    
    soma_principal = somaDiagonalPrincipalMatriz(matriz_quadrada, 3);
    printf("A soma da diagonal principal da sua matriz é igual a: %d\n", soma_principal);

    soma_secundaria = somaDiagonalSecundariaMatriz(matriz_quadrada, 3);
    printf("A soma da diagonal secundária da sua matriz é igual a: %d\n", soma_secundaria);

    soma_ambas = soma_principal + soma_secundaria;
    printf("A soma das 2 diagonais de sua matriz é: %d\n", soma_ambas);
    return 0;
}

