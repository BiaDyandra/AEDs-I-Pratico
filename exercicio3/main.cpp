/* 
 * criada em 14 de maio de 2025, 10:09
 * local: universidade federal de alfenas - UNIFAL
 * Autor: Bianca Dyandra Ribeiro Gomes de Farias
 * Professor: Paulo Bressan
 * disciplina: AEDsI
 * objetivo:realizar operações nos valores armazenados num vetorõ
 *
 */

#include <cstdlib>
#include <iostream>


using namespace std;

// Função auxiliar para imprimir os valores do vetor
void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    const int TAM = 100; // Tamanho máximo do vetor


    int v[TAM], n = 0, opcao, valor, pos;

    // Entrada inicial de valores pelo usuário
    cout << "Quantos valores deseja inserir (max " << TAM << ")? ";
    cin >> n;

    // Validação da quantidade inserida
    while (n < 0 || n > TAM) {
        cout << "Valor inválido. Digite novamente: ";
        cin >> n;
    }

    // Leitura dos valores
    for (int i = 0; i < n; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> v[i];
    }

    // Loop principal do menu
    while (opcao != 0){
        // Menu de opções
        cout << "\nMenu de Operações:\n";
        cout << "1 - Contar ocorrências de um valor\n";
        cout << "2 - Contar ocorrências dentro de um intervalo\n";
        cout << "3 - Buscar primeira ocorrência de um valor\n";
        cout << "4 - Excluir primeira ocorrência de um valor\n";
        cout << "5 - Inserir valor em uma posição\n";
        cout << "6 - Remover valores repetidos\n";
        cout << "7 - Imprimir vetor\n";
        cout << "0 - Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            // Contar quantas vezes um valor aparece no vetor
            case 1: {
                cout << "Digite o valor a ser contado: ";
                cin >> valor;
                int cont = 0;
                for (int i = 0; i < n; i++) {
                    if (v[i] == valor) cont++;
                }
                cout << "Ocorrências de " << valor << ": " << cont << endl;
                break;
            }

            // Contar quantos valores estão dentro de um intervalo
            case 2: {
                int inicio, fim, cont = 0;
                cout << "Digite o valor inicial do intervalo: ";
                cin >> inicio;
                cout << "Digite o valor final do intervalo: ";
                cin >> fim;
                for (int i = 0; i < n; i++) {
                    if (v[i] >= inicio && v[i] <= fim) cont++;
                }
                cout << "Valores no intervalo [" << inicio << ", " << fim << "]: " << cont << endl;
                break;
            }

            // Buscar a primeira ocorrência de um valor
            case 3: {
                cout << "Digite o valor a ser buscado: ";
                cin >> valor;
                bool encontrado = false;
                for (int i = 0; i < n; i++) {
                    if (v[i] == valor) {
                        cout << "Valor encontrado na posição " << i << endl;
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado)
                    cout << "Valor não encontrado.\n";
                break;
            }

            // Excluir a primeira ocorrência de um valor e "fechar o buraco"
            case 4: {
                cout << "Digite o valor a ser excluído: ";
                cin >> valor;
                bool excluido = false;
                for (int i = 0; i < n; i++) {
                    if (v[i] == valor) {
                        // Desloca todos os elementos para a esquerda
                        for (int j = i; j < n - 1; j++) {
                            v[j] = v[j + 1];
                        }
                        n--; // Diminui o tamanho do vetor
                        excluido = true;
                        cout << "Valor excluído.\n";
                        break;
                    }
                }
                if (!excluido)
                    cout << "Valor não encontrado.\n";
                break;
            }

            // Inserir valor em uma posição informada
            case 5: {
                if (n >= TAM) {
                    cout << "Vetor cheio! Não é possível inserir mais valores.\n";
                } else {
                    cout << "Digite o valor a ser inserido: ";
                    cin >> valor;
                    cout << "Digite a posição (0 a " << n << "): ";
                    cin >> pos;
                    if (pos < 0 || pos > n) {
                        cout << "Posição inválida!\n";
                    } else {
                        // Desloca os elementos para a direita para abrir espaço
                        for (int i = n; i > pos; i--) {
                            v[i] = v[i - 1];
                        }
                        v[pos] = valor; // Insere o valor na posição correta
                        n++;
                        cout << "Valor inserido.\n";
                    }
                }
                break;
            }

            // Remover todos os valores repetidos (mantém apenas a 1ª ocorrência)
            case 6: {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; ) {
                        if (v[i] == v[j]) {
                            // Remove valor duplicado
                            for (int k = j; k < n - 1; k++) {
                                v[k] = v[k + 1];
                            }
                            n--; // Diminui o tamanho do vetor
                        } else {
                            j++; // Só avança se não removeu
                        }
                    }
                }
                cout << "Valores repetidos removidos.\n";
                break;
            }

            // Mostrar os valores atuais do vetor
            case 7: {
                cout << "Vetor atual: ";
                imprimirVetor(v, n);
                break;
            }

            // Encerrar o programa
            case 0:
                cout << "Encerrando o programa.\n";
                break;

            // Caso o usuário digite uma opção inválida
            default:
                cout << "Opção inválida!\n";
        }

    } // Repete até o usuário escolher sair

    return 0;
}

