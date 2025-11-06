#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "string.h"

int main(int argc, char **argv) {
    system("cls || clear");

    char nome[8]; 
    leString(nome, sizeof(nome));
    printf("\n%s\n", nome);
    int a = sizeString(nome);
    printf("%d\n", a);
    inverteString(nome);
    printf("%s\n", nome);
    char copia[320];
    strcpy(copia, nome);
    printf("%s\n", copia);

    printf("%s\n", strcat(nome, copia));
    printf("%s\n", nome);
    printf("%s\n", copia);

    return 0;
}
