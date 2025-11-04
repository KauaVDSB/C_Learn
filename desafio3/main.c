#include <stdio.h>
#include "fatorial.h"

int main(int argc, char ** argv) {
    int n;
    long long resultado;

    printf("Digite um número para calcular o fatorial duplo:\n");
    scanf("%d", &n);

    resultado = fatorialDuplo(n);

    printf("O fatorial duplo de %d!! é: %lld\n", n, resultado);

    return 0;
}