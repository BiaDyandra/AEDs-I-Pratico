UNIVERSIDADE FEDERAL DE ALFENAS – UNIFAL
Disciplina: AEDs I
Professor: Paulo Bressan
Autor: Bianca Dyandra Ribeiro Gomes de Farias 2024.1.08.003

Projeto: 1º projeto
****************************************************************************

OBJETIVO
--------
adquirir conhecimentos de manipulação de registros em vetores e construção de estatísticas com variáveis simples em estruturas de controle.

FUNCIONALIDADES DO SISTEMA
--------------------------
Ao iniciar o programa, os dados dos imóveis são carregados a partir de um arquivo-texto
chamado “BD_Imoveis2.txt”. O sistema permite:

* Listar todos os imóveis cadastrados.
* Incluir um novo imóvel.
* Remover um imóvel a partir do nome da rua.
* Buscar imóveis por faixa de valor.
* Buscar imóveis com determinadas características:
   - Armários
   - Ar-condicionado
   - Aquecedor
   - Ventilador
* Buscar imóveis pelo número de quartos e suítes.
* Exibir estatísticas da base de dados:
   - Porcentagem de imóveis por finalidade (venda, aluguel, temporada)
   - Porcentagem de casas com suítes
   - Porcentagem de salas comerciais com piso de cerâmica
* Encerrar o programa, salvando todos os dados no arquivo “BD_Imoveis2.txt”.

ESTRUTURA DO ARQUIVO DE DADOS
-----------------------------
O arquivo "BD_Imoveis2.txt" deve conter no máximo 200 imóveis.
Cada linha representa um imóvel, com os seguintes 22 campos:

	-tipo 
	-finalidade 
	-endereco 
	-bairro 
	-cidade 
	-area 
	-valor/unidade 
	-iptu 
	-quartos 
	-suites 
	-banheiros 
	-vagas 
	-cozinha 
	-sala 
	-varanda 
	-area_servico 
	-piso 
	-conservacao 
	-armarios 
	-ar_condicionado 
	-aquecedor 
	-ventilador

Notas:
- A primeira linha é um cabeçalho e será ignorada na leitura.
- A última linha deve conter "fim" no campo "tipo", sinalizando o fim da leitura.
- O campo "valor" pode conter uma unidade. Se não houver unidade, apenas o número será armazenado.

REQUISITOS
----------
- Arquivo “BD_Imoveis2.txt” localizado no mesmo diretório do executável

COMO COMPILAR E EXECUTAR
-------------------------
1. Compile o programa:
   g++ -o imoveis main.cpp

2. Execute:
   ./imoveis

INSTRUÇÕES ADICIONAIS
----------------------
- Ao adicionar um imóvel, siga atentamente as instruções na tela.
- As opções do menu estão disponíveis durante toda a execução.
- Para excluir um imóvel, informe o nome da rua campo "endereco".
- Ao encerrar o programa, todos os dados serão salvos automaticamente no mesmo arquivo.


