/* 
 * Local: universidade federal de alfenas - UNIFAL
 * Autor: Bianca Dyandra Ribeiro Gomes de Farias 2024.1.08.003
 * Professor: paulo bressan
 * Disciplina: AEDsI
 * Criado em 20 de junho de 2025, 23:41
 * Objetivo:implementar uma biblioteca com a função de realizar operações em matrizes.
 * 
 */

#ifndef MATRIZ_H
#define MATRIZ_H

const int TAM = 128;
typedef int Vetor[TAM][TAM];


void multiplicaMatriz(Vetor mat, int dim1, int dim2, int fator);
void inverteColunas(Vetor mat, int dim1, int dim2);
void inverteLinhas(Vetor mat, int dim1, int dim2);
void transposta(Vetor orig, Vetor transp, int dim1, int dim2);

#endif
