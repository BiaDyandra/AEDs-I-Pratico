/* 
 * Local: universidade federal de alfenas - UNIFAL
 * Autor: Bianca Dyandra Ribeiro Gomes de Farias 2024.1.08.003
 * Professor: paulo bressan
 * Disciplina: AEDsI
 * Criado em 20 de junho de 2025, 23:46
 * Objetivo:implementar uma biblioteca com a função de realizar operações em matrizes.
 * 
 */

#include "matriz.h"

void multiplicaMatriz(Vetor mat, int dim1, int dim2, int fator) {
    for (int i = 0; i < dim1; i++) {
        int* linha = *(mat + i); // ou: int* linha = mat[i];
        for (int j = 0; j < dim2; j++) {
            *(linha + j) *= fator;
        }
    }
}


void transposta(Vetor orig, Vetor transp, int dim1, int dim2) {
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            *(*(transp + j) + i) = *(*(orig + i) + j);
        }
    }
}

void inverteColunas(Vetor mat, int dim1, int dim2) {
    for (int i = 0; i < dim1; i++) {
        int* linha = *(mat + i);
        for (int j = 0; j < dim2 / 2; j++) {
            int temp = *(linha + j);
            *(linha + j) = *(linha + (dim2 - 1 - j));
            *(linha + (dim2 - 1 - j)) = temp;
        }
    }
}

void inverteLinhas(Vetor mat, int dim1, int dim2) {
    for (int i = 0; i < dim1 / 2; i++) {
        int* linha1 = *(mat + i);
        int* linha2 = *(mat + (dim1 - 1 - i));
        for (int j = 0; j < dim2; j++) {
            int temp = *(linha1 + j);
            *(linha1 + j) = *(linha2 + j);
            *(linha2 + j) = temp;
        }
    }
}
