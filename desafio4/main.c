#include <stdio.h>
#include "desafio4.h"

#define TAM 5

int main(int argc, char ** argv) {
    int vetor[TAM];
    int maior;
    
    preenche_array_d4(vetor, TAM);
    
    maior = maiorElementoArray(vetor, TAM);
    
    printf("O maior elemento do vetor é: %d\n", maior);
    
    return 0;
}