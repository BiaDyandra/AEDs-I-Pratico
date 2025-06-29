
/* criado em 24 de abril de 2025, 11:17
 * local: universidade federal de alfenas - UNIFAL
 * autor: Bianca Dyandra Ribeiro Gomes de Farias 2024.1.08.003
 * professor: paulo bressan
 * disciplina: AEDsI
 * objetivo:gerar a descrição de uma cena gráfica e calcular sua área e volume.
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

//função principal

int main(int argc, char** argv) {
    //variaveis declaradas
    float raio, lado, altura, a, b, c;
    int opcao;
    char continuar = 's';

    //cria ou abre o arquivo cenagrafica.txt 
    ofstream arquivo("cenagrafica.txt");

    //verificação se o arquivo abriu corretamente
    if (!arquivo.is_open()) {
        cout << "Erro ao criar o arquivo!" << endl;
        return 1;
    }


    //loop principal para usuario adicionar varias figuras
    while (continuar == 's' || continuar == 'S') {

        //menu de opções
        cout << "\nMENU - ESCOLHA UMA FIGURA " << endl;
        cout << "1. Quadrado" << endl;
        cout << "2. Cubo" << endl;
        cout << "3. Cilindro" << endl;
        cout << "4. Triângulo" << endl;
        cout << "5. Esfera" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        //executa as ação escolhida pelo usuario
        switch (opcao) {
                //opção quadrado
            case 1:
            {
                cout << "Digite o lado do quadrado: ";
                cin >> lado;
                //verificação de numeros invalidos
                while (lado <= 0) {
                    cout << "O número informado é inválido! Tente novamente.\n";
                    cout << "Digite o lado do quadrado: ";
                    cin >> lado;
                }
                //escreve os dados no arquivo de texto
                arquivo << "quadrado " << lado << endl;
                break;
            }
                //opção cubo
            case 2:
            {
                cout << "Digite o lado do cubo: ";
                cin >> lado;
                //verificação de numeros invalidos
                while (lado <= 0) {
                    cout << "O número informado é inválido! Tente novamente.\n";
                    cout << "Digite o lado do cubo: ";
                    cin >> lado;
                }
                //escreve os dados no arquivo de texto
                arquivo << "cubo " << lado << endl;
                break;
            }
                //opção cilindro
            case 3:
            {
                cout << "Digite o raio e a altura do cilindro: ";
                cin >> raio >> altura;
                //verificação de numeros invalidos
                while (raio <= 0 || altura <= 0) {
                    cout << "Valor inválido! Tente novamente.\n";
                    cout << "Digite o raio e a altura do cilindro: ";
                    cin >> raio >> altura;
                }
                //escreve os dados no arquivo de texto
                arquivo << "cilindro " << raio << " " << altura << endl;
                break;
            }
                //opção triangulo
            case 4:
            {
                cout << "Digite os 3 lados do triângulo: ";
                cin >> a >> b >> c;
                //verificação de numeros invalidos
                while (a <= 0 || b <= 0 || c <= 0) {
                    cout << "Valor inválido! Tente novamente.\n";
                    cout << "Digite os 3 lados do triângulo: ";
                    cin >> a >> b >> c;
                }
                //escreve os dados no arquivo de texto
                arquivo << "triangulo " << a << " " << b << " " << c << endl;
                break;
            }
                //opção esfera
            case 5:
            {
                cout << "Digite o raio da esfera: ";
                cin >> raio;
                //verificação de numeros invalidos
                while (raio <= 0) {
                    cout << "O número informado é inválido! Tente novamente.\n";
                    cout << "Digite o raio da esfera: ";
                    cin >> raio;
                }
                //escreve os dados no arquivo de texto
                arquivo << "esfera " << raio << endl;
                break;
            }
                //opção não existente
            default:
                cout << "Opção inválida!" << endl;
        }
        //opção de adicionar mais objetos
        cout << "\nDeseja adicionar outro objeto? (s/n): ";
        cin >> continuar;
        //validaçã~o para aceitar somente S ou N
        while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N') {
            cout << "Resposta inválida! Digite apenas 's' ou 'n': ";
            cin >> continuar;
            
        }
    }
    //escreve fim no arquivo txt
    arquivo << "fim" << endl;
    //fechar o arquivo txt
    arquivo.close();
    cout << "\nArquivo 'cenagrafica.txt' criado com sucesso!" << endl;

    return 0;
}


