#include <stdio.h>
#include <string.h>

void limpaBuffer() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

/* Números */

char e_input[50] = "Entrada inválida, tente novamente.\0";

void validaIntPositivo (int *num) {
    do {
        scanf(" %d", num);

        if (*num < 0) {
            int c;
            limpaBuffer();
            printf("%s\n", e_input);
        }
    } while (*num < 0);
    limpaBuffer();
}

void validaDoublePositivo(double *num) {
    do {
        scanf("%lf", num);

        if (*num <= 0) {
            int c;
            limpaBuffer();
            printf("%s\n", e_input);
        }
    } while (*num <= 0);
    limpaBuffer();
}


/* STRINGS */

void limpaString(char *string) {
    string[strcspn(string, "\n")] = 0;
}

void limpaBufferString(char *string) {
    if (strchr(string, '\n') == NULL) {
        limpaBuffer();
    }
}