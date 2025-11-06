#include <stdio.h>
#include "desafio7.h"

#define TAM 5

int main(int argc, char ** argv) {
    int vetor[TAM];
    int soma;
    
    preenche_array_d7(vetor, TAM);
    
    soma = somaArray(vetor, TAM);
    
    printf("A soma de todos os elementos do vetor é: %d\n", soma);
    
    return 0;
}