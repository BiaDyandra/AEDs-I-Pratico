/* 
 * Local: universidade federal de alfenas - UNIFAL
 * Autor: Bianca Dyandra Ribeiro Gomes de Farias 2024.1.08.003
 * Professor: paulo bressan
 * Disciplina: AEDsI
 * Criado em 16 de junho de 2025, 10:02
 * Objetivo:métodos de ordenação implementados com ponteiros.
 * 
 */

#include "ordenacao.h"


void bubbleSort(int* vet, int tamanho) {
    for (int* i = vet; i < vet + tamanho - 1; ++i) {
        for (int* j = vet; j < vet + tamanho - 1 - (i - vet); ++j) {
            if (*j > *(j + 1)) {
                int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}

void selectionSort(int* vet, int tamanho) {
    for (int* i = vet; i < vet + tamanho - 1; ++i) {
        int* min = i;
        for (int* j = i + 1; j < vet + tamanho; ++j) {
            if (*j < *min) {
                min = j;
            }
        }
        if (min != i) {
            int temp = *i;
            *i = *min;
            *min = temp;
        }
    }
}

void insertionSort(int* vet, int tamanho) {
    for (int* i = vet + 1; i < vet + tamanho; ++i) {
        int key = *i;
        int* j = i - 1;
        while (j >= vet && *j > key) {
            *(j + 1) = *j;
            --j;
        }
        *(j + 1) = key;
    }
}

