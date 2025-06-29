Objetivo: implementar uma biblioteca com a função de realizar operações em matrizes.

Descrição: a biblioteca deve ter o arquivo de cabeçalho .H com as assinaturas das funções e o arquivo com os corpos das funções .CPP. Utilize a constante TAM e o tipo "Vetor", definidos abaixo, para todas as matrizes e parâmetros de entrada e saída das funções. NÃO utilize índices nas operações das matrizes, utilize apenas ponteiros.

const int TAM = 128;
typedef int Vetor[TAM][TAM];

Operações:
multiplicar todos os valores da matriz por um valor;
encontrar a matriz transposta;
inverter as colunas na horizontal (primeira -> última, segunda -> penúltima, ... , até a metade);
inverter as linhas na vertical (primeira -> última, segunda -> penúltima, ... , até a metade).
Entregar: somente os arquivos .H e .CPP.
