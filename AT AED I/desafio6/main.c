#include <stdio.h>
#include "desafio6.h"

int main(int argc, char ** argv) {
    int base, exp;
    long long resultado;

    printf("Digite o valor da base:\n");
    scanf("%d", &base);
    
    printf("Digite o valor do expoente (positivo):\n");
    scanf("%d", &exp);

    resultado = potenciaRecursiva(base, exp);

    printf("%d elevado a %d é: %lld\n", base, exp, resultado);

    return 0;
}