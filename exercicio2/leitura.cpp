
/* 
 * criado em 24 de abril de 2025, 10:13
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
#include <cmath>

using namespace std;

//função principal
int main(int argc, char** argv) {
    
    //abrir o arquivo cenografica.txt para leitura
    ifstream arquivo("cenografica.txt");
    
    //armazena o tipo de objeto lido
    string objeto;
    
    //variaveis declaradas
    float areat = 0, volume = 0, PI;
    float lado = 0, raio = 0, altura = 0, a = 0, b = 0, c = 0, soma = 0;
    float somaareat = 0, somavolut = 0;

    PI = 3.14159265358979323846;

    //verifica se o arquivo txt foi aberto
    if (!arquivo.is_open()) {
        cout << "Erro arquivo não encontrado." << endl;
        return 1;
    }
    
    //loop principal para ler os objetos do arquivo até  encontrar 'fim'
    while (arquivo >> objeto) {
        //sair do loop quando encontra 'fim'
        if (objeto == "fim") {
            break;
        } else {
            //opção quadrado
            if (objeto == "quadrado") {
                arquivo >> lado;
                areat = lado * lado;
                //acumula area total
                somaareat = somaareat + areat;
                cout << "------------------------- " << endl;
                cout << "QUADRADO " << endl;
                cout << "Área : " << areat << endl;

            } else {
                //opção cubo
                if (objeto == "cubo") {
                    arquivo >> lado;
                    areat = 6 * lado * lado;
                    volume = lado * lado * lado;
                    //acumula area total
                    somaareat = somaareat + areat;
                    //acumula volume total
                    somavolut = somavolut + volume;
                    cout << "------------------------- " << endl;
                    cout << "CUBO " << endl;
                    cout << "Área : " << areat << endl;
                    cout << "Volume : " << volume << endl;
                } else {
                    //opção cilindro
                    if (objeto == "cilindro") {
                        arquivo >> raio >> altura;
                        areat = 2 * PI * raio * (altura + raio);
                        volume = PI * (raio * raio) * altura;
                        //acumula area total
                        somaareat = somaareat + areat;
                        //acumula volume total
                        somavolut = somavolut + volume;
                        cout << "------------------------- " << endl;
                        cout << "CILINDRO " << endl;
                        cout << "Área : " << areat << endl;
                        cout << "Volume : " << volume << endl;
                    } else {
                        //opção triangulo
                        if (objeto == "triangulo") {
                            arquivo >> a >> b >> c;
                            soma = (a + b + c) / 2;
                            areat = sqrt(soma * (soma - a) * (soma - b) * (soma - c));
                            //acumula area total
                            somaareat = somaareat + areat;
                            cout << "------------------------- " << endl;
                            cout << "TRIANGULO " << endl;
                            cout << "Área : " << areat << endl;
                        } else {
                            //opção esfera
                            if (objeto == "esfera") {
                                arquivo >> raio;
                                areat = 4 * PI * raio * raio;
                                volume = (4.0 / 3.0) * PI * raio * raio * raio;
                                //acumula area total
                                somaareat = somaareat + areat;
                                //acumula volume total
                                somavolut = somavolut + volume;
                                cout << "------------------------- " << endl;
                                cout << "ESFERA " << endl;
                                cout << "Área : " << areat << endl;
                                cout << "Volume : " << volume << endl;
                                cout << "------------------------- " << endl;
                            }else{
                                //caso o objeto lido não
                                cout << "objeto desconhecido: " << objeto << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    //exibe area total e volume total calculados
    cout << "\n****************************" << endl;
    cout << "AREA TOTAL: " << somaareat << endl;
    cout << "VOLUME TOTAL: " << somavolut << endl;
    cout << "****************************" << endl;
    
    //fecha o arquivo textoã
    arquivo.close();
    return 0;
}

