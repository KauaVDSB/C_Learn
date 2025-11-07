#include <stdio.h>
#include <string.h>
#include "io.h"
#include "produto.h"


void preencheVetorProdutos(Produto *v_prod, int num_prod) {
    int i;
    for (i = 0; i < num_prod; i++) {
        printf("Prencha o nome do produto:\n");
        fgets((v_prod + i)->nome, sizeof(v_prod->nome), stdin);
        limpaBufferString((v_prod + i)->nome);
        limpaString((v_prod + i)->nome);

        printf("Insira o preço do produto com 2 casas decimais (ex: 4.50):\n");
        validaDoublePositivo(&(v_prod + i)->preco);
    }
}


void imprimeSeparadorProdutos() {
    for (int i = 1; i <= 66; i++) {
        if (i == 1 || i == 52 || i == 66) {
            printf("|");
        } else {
            printf("-");
        }
    }

    printf("\n");
}
void mostraVetorProdutos(Produto *v_prod, int num_prod) {
    imprimeSeparadorProdutos();


    for (int i = 0; i < num_prod; i++) {
        char nome_f[50];
        strcpy(nome_f, (v_prod + i)->nome);
        if (strlen((v_prod + i)->nome) != 49) {
            int spaces = 49 - strlen(nome_f);
            for (int j = 0; j < spaces; j++) {
                strcat(nome_f, " ");
            }
        }
        
        printf("|");
        printf("%s", nome_f);
        printf(" | ");
        printf("%.2lf\n", (v_prod + i)->preco);
        imprimeSeparadorProdutos();
    }
}