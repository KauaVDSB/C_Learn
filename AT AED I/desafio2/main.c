#include <stdio.h>
#include "matriz.h"


int main(int argc, char ** argv) {
    int m1[3][3], m2[3][3], m_res[3][3];
    preenche_matriz(m1, 3, 3);
    mostra_matriz(m1, 3, 3);
    preenche_matriz(m2, 3, 3);
    mostra_matriz(m2, 3, 3);

    multiplica_matriz(  m1, 3, 3,
                        m2, 3, 3,
                        m_res
                    );

    printf("--- Matriz Resultante (m1 * m2) ---\n");
    mostra_matriz(m_res, 3, 3);

    return 0;
}