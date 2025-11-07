#ifndef PRODUTO_H_
#define PRODUTO_H_

typedef struct Produto{
    char nome[50];
    double preco;
} Produto;

void preencheVetorProdutos(Produto *v_prod, int num_prod);
void mostraVetorProdutos(Produto *v_prod, int num_prod);

#endif