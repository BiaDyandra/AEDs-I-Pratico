
/* 
 * criado em 26 de março de 2025, 09:30
 * local: universidade federal de alfenas - UNIFAL
 * autor: Bianca Dyandra Ribeiro Gomes de Farias 2024.1.08.003
 * professor: paulo bressan
 * disciplina: AEDsI
 * objetivo: criar um sistema que faça a classificação dos candidatos a uma vaga de emprego
 *  com base a formação, experiência e certificações; classificando os candidatos como
 *  rejeitado, junior, pleno e senior.
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

int main() {
    int idade, escolaridade, experiencia, certificacoes;

    
    // Entrada de dados sobre idade
    printf("Idade: ");
    scanf("%d", &idade);
    while (idade <= 0) {
        printf("O número informado é inválido! Tente novamente.\n");
        printf("Idade: ");
        scanf("%d", &idade);
    }
    
    // Entrada de dados sobre a escolaridade
    printf("Escolaridade (0-Nenhuma, 1-Médio, 2-Superior, 3-Pós-graduação): ");
    scanf("%d", &escolaridade);
    while (escolaridade < 0 || escolaridade > 3) {
        printf("O número informado é inválido! Tente novamente.\n");
        printf("Escolaridade (0-Nenhuma, 1-Médio, 2-Superior, 3-Pós-graduação): ");
        scanf("%d", &escolaridade);
    }
    
    // Entrada de dados sobre a experiencia
    printf("Anos de experiência: ");
    scanf("%d", &experiencia);
    while (experiencia < 0) {
        printf("O número informado é inválido! Tente novamente.\n");
        printf("Anos de experiência: ");
        scanf("%d", &experiencia);
    }

    // Entrada de dados sobre os certificados
    printf("Número de certificações relevantes: ");
    scanf("%d", &certificacoes);
    while (certificacoes < 0) {
        printf("O número informado é inválido! Tente novamente.\n");
        printf("Número de certificações relevantes: ");
        scanf("%d", &certificacoes);
    }


    //  verificando se o candidato vai ser calssificado como rejeitado
    if (idade < 18 || escolaridade < 1 || (experiencia < 1 && certificacoes == 0)) {
        printf("Classificação: Candidato Rejeitado\n");
    } else {
        // verificando se o candidado vai ser classificado como junior
        if (escolaridade == 1 && (experiencia >= 1 || certificacoes > 0)) {
            printf("Classificação: Candidato Júnior\n");
        } else {
            //verificando se o candidato vai ser classificado como pleno
            if (escolaridade == 2 && (experiencia >= 3 || (experiencia >= 1 && certificacoes >= 2))) {
                printf("Classificação: Candidato Pleno\n");
            } else {
                //verificando se o candidato vai ser classificado como senior
                if ((escolaridade == 2 && experiencia >= 5 && certificacoes >= 1) || (escolaridade == 3 && experiencia >= 3)) {
                    printf("Classificação: Candidato Sênior\n");
                } else {
                    printf("Classificação: Candidato Rejeitado\n");
                }
            }
        }
    }

    return 0;
}

