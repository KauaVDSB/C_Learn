#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct user {
    char nome[51];
    char cpf[12];
    char senha[51];
    int idade;
    int admin;
} user;

void leString(char *string, int size_string) {
    if (fgets(string, size_string, stdin) != NULL) {
        string[strcspn(string, "\n")] = 0;
        
    } else {
        printf("tu é burro\n");
    }
}


int main() {
    user u1, u2;
    int c;
    while((c = getchar()) != '\n' && c != EOF);

    leString(u1.nome, sizeof(u1.nome));
    // limpaLinhaString(u1.nome);
    leString(u1.cpf, sizeof(u1.cpf));
    // limpaLinhaString(u1.cpf);
    leString(u1.senha, sizeof(u1.senha));
    // limpaLinhaString(u1.senha);
    scanf("%d", &u1.idade);
    u1.admin = 1;

    printf("%s\n", u1.nome);
    printf("%s\n", u1.cpf);
    printf("%s\n", u1.senha);
    printf("%d\n", u1.idade);
    printf("%s\n", u1.admin == 1 ? "É admin.\0" : "Não é admin.\0");
    printf("%d\n", u1.idade);
    printf("%d\n", u1.idade);
    printf("%d\n", u1.idade);


    /* Permite atribuição entre estruturas do mesmo tipo! */
    u2 = u1;
    
}