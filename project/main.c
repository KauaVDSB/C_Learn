#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include "produto.h"



int main (int argc, char **argv) {
    int num_produtos = 0, num_adicionar = 0;
    Produto *vetor_produtos = NULL;
    FILE *f;

    /* Procura Estoque */
    f = fopen("produtos.dat", "rb");
    if (f != NULL) {
        printf("Arquivo de estoque encontrado. Carregando estoque...\n");


        /* Tamanho do arquivo*/
        fseek(f, 0, SEEK_END);
        long file_size = ftell(f);
        rewind(f);

        num_produtos = file_size/sizeof(Produto);

        if (num_produtos > 0) {
            vetor_produtos = malloc(num_produtos * sizeof(Produto));
            if (vetor_produtos == NULL) {
                printf("Erro ao tentar alocar memória.\n");
                fclose(f);
                return 1;
            }

            fread(vetor_produtos, sizeof(Produto), num_produtos, f);

            printf("--- Estoque Carregado! ---\n");
            mostraVetorProdutos(vetor_produtos, num_produtos);
        }
    } else {
        printf("Nenhum estoque encontrado.\n");
    }


    
    /* Interação usuário */
    if (vetor_produtos == NULL) {
        printf("Insira quantos produtos deseja cadastrar INICIALMENTE:\n");
        validaIntPositivo(&num_produtos);
        
        /* Manipulação de vetor de structs */
        do {
            vetor_produtos = malloc(num_produtos * sizeof(Produto));
            if (vetor_produtos == NULL) {
                printf("Erro ao tentar alocar memória.\n");
            }
        } while(vetor_produtos == NULL);
        
        preencheVetorProdutos(vetor_produtos, num_produtos);
        mostraVetorProdutos(vetor_produtos, num_produtos);
    }



    printf("\nQuantos produtos A MAIS deseja adicionar?\n");
    validaIntPositivo(&num_adicionar);

    if (num_adicionar > 0) {
        Produto *v_temp;
        v_temp = realloc(vetor_produtos, (num_produtos + num_adicionar) * sizeof(Produto));
        if (v_temp == NULL) {
            printf("Erro ao tentar alocar memória. Dados ainda seguros.\n");
        } else {
            vetor_produtos = v_temp;
            preencheVetorProdutos((vetor_produtos + num_produtos), num_adicionar);
            num_produtos = num_produtos + num_adicionar;
    
            printf("--- Estoque atualizado! ---\n");
            mostraVetorProdutos(vetor_produtos, num_produtos);
        }
        

    }


    /* ARQUIVOS */
    f = fopen("produtos.dat", "wb");
    if (f == NULL) {
        printf("Erro fatal ao tentar abrir arquivo!\n");
        exit(1);
    }
    int total_gravado;
    total_gravado = fwrite(vetor_produtos, sizeof(Produto), num_produtos, f);
    if (total_gravado != num_produtos) {
        printf("Erro na escrita de arquivo. Estoque pode estar corrompido.\n");
        exit(1);
    } else {
        printf("--- Estoque salvo com sucesso! ---\n");
    }

    fclose(f);


    /* Liberação de memória */
    free(vetor_produtos);
    printf("Memória liberada, ENCERRANDO PROGRAMA.\n");
    return 0;
}
