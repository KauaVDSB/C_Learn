#ifndef matriz_h_
#define matriz_h_

void preencheMatriz(int m[][3], int q_x);
// void preencheMatriz(int q_x, int q_y, int m[q_y][q_x]);
void mostraMatriz(int m[][3], int q_x);
int somaDiagonalPrincipalMatriz(int m[][3], int q_xy);
int somaDiagonalSecundariaMatriz(int m[][3], int q_xy);

#endif