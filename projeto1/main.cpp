/* 
 * local: universidade federal de alfenas - UNIFAL
 * Autor: Bianca Dyandra Ribeiro Gomes de Farias 2024.1.8.003
 * Professor: Paulo Bressan
 * disciplina: AEDsI
 * objetivo:adquirir conhecimentos de manipulação de registros em vetores e construção 
 * de estatísticas com variáveis simples em estruturas de controle.
 */

#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 200; // número máximo de imóveis que podem ser armazenados

// Estrutura que representa um imóvel com todos os seus atributos
struct Imovel {
    string tipo, finalidade, endereco, bairro, cidade;
    float area, valor, iptu;
    string unidade_valor;
    int quartos, suites, banheiros, vagas;
    string cozinha, sala, varanda, area_servico;
    string piso, conservacao;
    string armarios, ar_condicionado, aquecedor, ventilador;
};

// Função que lê os imóveis do arquivo "BD_Imoveis2.txt"
int lerImoveis(Imovel v[]) {
    ifstream arq("BD_Imoveis2.txt");
    if (!arq) {
        cout << "Arquivo não encontrado. Começando com lista vazia.\n";
        return 0;
    }

    int i = 0;
    string ignorar;
    string valorStr;
    int barra = valorStr.find('/'); // posição da barra para separar valor e unidade
    getline(arq, ignorar); // ignora a primeira linha (cabeçalho)

    while (i < MAX && arq >> v[i].tipo) {
        if (v[i].tipo == "fim") break; // fim da lista
        arq >> v[i].finalidade >> v[i].endereco >> v[i].bairro >> v[i].cidade;
        arq >> v[i].area >> valorStr >> v[i].iptu;

        // separa valor numérico da unidade (se houver)
        barra = valorStr.find('/');
        if (barra != -1) {
            v[i].valor = stof(valorStr.substr(0, barra)); // converte parte numérica
            v[i].unidade_valor = valorStr.substr(barra + 1); // pega a unidade
        } else {
            v[i].valor = stof(valorStr);
            v[i].unidade_valor = "";
        }

        // leitura do restante dos campos
        arq >> v[i].quartos >> v[i].suites >> v[i].banheiros >> v[i].vagas;
        arq >> v[i].cozinha >> v[i].sala >> v[i].varanda >> v[i].area_servico;
        arq >> v[i].piso >> v[i].conservacao;
        arq >> v[i].armarios >> v[i].ar_condicionado >> v[i].aquecedor >> v[i].ventilador;
        i++;
    }

    arq.close();
    return i; // retorna a quantidade de imóveis lidos
}

int main() {
    Imovel imoveis[MAX]; // vetor de imóveis
    int total = lerImoveis(imoveis); // lê dados do arquivo
    int op = 1;
    float min, max;
    string rua;
    string a, b, c, d;
    int q, s;
    // variáveis para estatísticas
    int venda = 0, aluguel = 0, temporada = 0, comSuite = 0, ceramica = 0, salas = 0;

    while (op != 0){
        // menu principal
        cout << "\n=== MENU IMÓVEIS ===\n";
        cout << "1 - Mostrar imóveis\n";
        cout << "2 - Adicionar imóvel\n";
        cout << "3 - Remover imóvel por rua\n";
        cout << "4 - Buscar por valor\n";
        cout << "5 - Buscar por características\n";
        cout << "6 - Buscar por quartos/suítes\n";
        cout << "7 - Estatísticas\n";
        cout << "0 - Sair\n";
        cout << "Escolha: ";
        cin >> op;

        switch (op) {
            case 1: {
                // exibe todos os imóveis cadastrados
                for (int i = 0; i < total; i++) {
                    cout << "#" << i+1 << " - Tipo: " << imoveis[i].tipo
                         << ", Finalidade: " << imoveis[i].finalidade
                         << ", Endereço: " << imoveis[i].endereco
                         << ", Valor: R$" << imoveis[i].valor;
                    if (!imoveis[i].unidade_valor.empty())
                        cout << " por " << imoveis[i].unidade_valor;
                    cout << endl;
                }
                break;
            }
            case 2: {
                // adiciona um novo imóvel ao vetor
                if (total >= MAX) {
                    cout << "Não é possível adicionar mais imóveis.\n";
                    break;
                }
                cout << "Digite os dados do novo imóvel (um por vez):\n";
                // coleta os dados manualmente
                cout << "Tipo: "; cin >> imoveis[total].tipo;
                cout << "Finalidade: "; cin >> imoveis[total].finalidade;
                cout << "Endereço: "; cin >> imoveis[total].endereco;
                cout << "Bairro: "; cin >> imoveis[total].bairro;
                cout << "Cidade: "; cin >> imoveis[total].cidade;
                cout << "Área: "; cin >> imoveis[total].area;
                cout << "Valor: "; cin >> imoveis[total].valor;
                cout << "Unidade do valor (ex: mes, dias, deixe vazio se não tiver): ";
                cin.ignore(); getline(cin, imoveis[total].unidade_valor);
                cout << "IPTU: "; cin >> imoveis[total].iptu;
                cout << "Quartos: "; cin >> imoveis[total].quartos;
                cout << "Suítes: "; cin >> imoveis[total].suites;
                cout << "Banheiros: "; cin >> imoveis[total].banheiros;
                cout << "Vagas: "; cin >> imoveis[total].vagas;
                cout << "Cozinha (sim/nao): "; cin >> imoveis[total].cozinha;
                cout << "Sala (sim/nao): "; cin >> imoveis[total].sala;
                cout << "Varanda (sim/nao): "; cin >> imoveis[total].varanda;
                cout << "Área de serviço (sim/nao): "; cin >> imoveis[total].area_servico;
                cout << "Piso: "; cin >> imoveis[total].piso;
                cout << "Conservação: "; cin >> imoveis[total].conservacao;
                cout << "Armários (sim/nao): "; cin >> imoveis[total].armarios;
                cout << "Ar-condicionado (sim/nao): "; cin >> imoveis[total].ar_condicionado;
                cout << "Aquecedor (sim/nao): "; cin >> imoveis[total].aquecedor;
                cout << "Ventilador (sim/nao): "; cin >> imoveis[total].ventilador;

                total++; // incrementa contador
                cout << "Imóvel adicionado!\n";
                break;
            }
            case 3: {
                // remove um imóvel com base no nome da rua (endereço)
                cout << "Qual o nome da rua do imóvel a remover? ";
                cin >> rua;
                bool achou = false;
                for (int i = 0; i < total; i++) {
                    if (imoveis[i].endereco == rua) {
                        // move todos os imóveis à frente uma posição para trás
                        for (int j = i; j < total - 1; j++) {
                            imoveis[j] = imoveis[j + 1];
                        }
                        total--;
                        cout << "Removido com sucesso.\n";
                        achou = true;
                        break;
                    }
                }
                if (!achou) cout << "Rua não encontrada.\n";
                break;
            }
            case 4: {
                // busca imóveis dentro de uma faixa de valor
                cout << "Digite valor mínimo e máximo: ";
                cin >> min >> max;
                for (int i = 0; i < total; i++) {
                    if (imoveis[i].valor >= min && imoveis[i].valor <= max) {
                        cout << imoveis[i].tipo << " em " << imoveis[i].endereco
                             << " por R$" << imoveis[i].valor;
                        if (!imoveis[i].unidade_valor.empty())
                            cout << " por " << imoveis[i].unidade_valor;
                        cout << endl;
                    }
                }
                break;
            }
            case 5: {
                // busca imóveis com características específicas
                cout << "Digite sim/nao para armarios, ar-condicionado, aquecedor, ventilador: ";
                cin >> a >> b >> c >> d;
                for (int i = 0; i < total; i++) {
                    if (imoveis[i].armarios == a && imoveis[i].ar_condicionado == b &&
                        imoveis[i].aquecedor == c && imoveis[i].ventilador == d) {
                        cout << imoveis[i].tipo << " - " << imoveis[i].endereco << endl;
                    }
                }
                break;
            }
            case 6: {
                // busca imóveis por número de quartos e suítes
                cout << "Digite número de quartos e suítes: ";
                cin >> q >> s;
                for (int i = 0; i < total; i++) {
                    if (imoveis[i].quartos == q && imoveis[i].suites == s) {
                        cout << imoveis[i].tipo << " - " << imoveis[i].endereco << endl;
                    }
                }
                break;
            }
            case 7: {
                // estatísticas gerais
                for (int i = 0; i < total; i++) {
                    if (imoveis[i].finalidade == "venda") venda++;
                    if (imoveis[i].finalidade == "aluguel") aluguel++;
                    if (imoveis[i].finalidade == "temporada") temporada++;
                    if (imoveis[i].tipo == "casa" && imoveis[i].suites > 0) comSuite++;
                    if (imoveis[i].tipo == "sala_comercial") {
                        salas++;
                        if (imoveis[i].piso == "ceramica" || imoveis[i].piso == "cerâmica")
                            ceramica++;
                    }
                }
                // exibe resultados
                cout << "Finalidades:\n";
                cout << "Venda: " << (venda * 100 / total) << "% | ";
                cout << "Aluguel: " << (aluguel * 100 / total) << "% | ";
                cout << "Temporada: " << (temporada * 100 / total) << "%\n";
                cout << "Casas com suíte: " << (comSuite * 100 / total) << "%\n";
                if (salas > 0)
                    cout << "Salas com piso cerâmica: " << (ceramica * 100 / salas) << "%\n";
                else
                    cout << "Nenhuma sala comercial encontrada.\n";
                break;
            }
            case 0: {
                // salva os dados no arquivo ao sair
                ofstream arq("BD_Imoveis2.txt");
                arq << "Tipo Finalidade Endereco Bairro Cidade Area Valor IPTU Quartos Suites Banheiros Vagas Cozinha Sala Varanda Area_de_Servico Piso Conservacao Armarios Ar-condicionado Aquecedor Ventilador\n";
                for (int i = 0; i < total; i++) {
                    arq << imoveis[i].tipo << " " << imoveis[i].finalidade << " " << imoveis[i].endereco << " "
                        << imoveis[i].bairro << " " << imoveis[i].cidade << " ";
                    arq << imoveis[i].area << " ";
                    if (!imoveis[i].unidade_valor.empty())
                        arq << imoveis[i].valor << "/" << imoveis[i].unidade_valor << " ";
                    else
                        arq << imoveis[i].valor << " ";
                    arq << imoveis[i].iptu << " ";
                    arq << imoveis[i].quartos << " " << imoveis[i].suites << " "
                        << imoveis[i].banheiros << " " << imoveis[i].vagas << " ";
                    arq << imoveis[i].cozinha << " " << imoveis[i].sala << " " << imoveis[i].varanda << " "
                        << imoveis[i].area_servico << " ";
                    arq << imoveis[i].piso << " " << imoveis[i].conservacao << " ";
                    arq << imoveis[i].armarios << " " << imoveis[i].ar_condicionado << " "
                        << imoveis[i].aquecedor << " " << imoveis[i].ventilador << "\n";
                }
                arq << "fim\n";
                arq.close();
                cout << "Arquivo salvo. Tchau!\n";
                break;
            }
            default:
                cout << "Escolha inválida. Tente de novo.\n";
        }
    }

    return 0;
}
