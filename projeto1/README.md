Objetivo: adquirir conhecimentos de manipulação de registros em vetores e construção de estatísticas com variáveis simples em estruturas de controle.

Descrição: o aplicativo desenvolvido no projeto deve ler os dados de um arquivo-texto no início da execução e escrever neste mesmo arquivo-texto no final da execução. Os dados do arquivo-texto devem ser armazenados num vetor de registros na ordem de entrada, com no máximo 200 registros, sobre imóveis disponíveis para venda e locação. Cada linha do arquivo de entrada tem informações de apenas um imóvel, conforme o modelo apresentado no arquivo-texto de exemplo “BD_Imoveis2.txt”. Durante a execução, o aplicativo deverá exibir um menu de opções ao usuário, conforme as operações abaixo. O vetor de registros não poderá ter "buracos", ou seja, quando um imóvel for excluído, todos os registros devem ser deslocados para a "esquerda" para preencher o "espaço vazio".

Operações: o aplicativo deverá realizar as seguintes operações sobre a base de dados:
inclusão de um novo imóvel na base de dados;
busca de um imóvel pela rua, e se encontrado, permitir a exclusão da base de dados;
busca de imóveis por uma faixa de valores para locação, aluguel  ou  temporada;
busca de imóveis pelas características: armários, ar-condicionado, aquecedor e ventilador;
busca de imóveis pelo número de quartos e suítes;
relatório de estatísticas: porcentagens de imóveis por finalidade, porcentagens de casas com suítes, porcentagem de pisos com cerâmica nas salas comerciais;
listagem de todos os imóveis disponíveis.
Arquivo de Imóveis: conterá um máximo de 200 linhas, onde cada linha conterá 22 campos separados por espaço: tipo, finalidade, endereço, bairro, cidade, área, valor, IPTU, quartos, suítes, banheiros, vagas, cozinha, sala, varanda, área de serviço, piso, conservação, armários, ar-condicionado, aquecedor e ventilador. A primeira linha do arquivo deve ser excluída e a última linha, que não fará parte dos cálculos, terá no nome do veículo a palavra “fim”.

Documentação: faça um arquivo-texto com o nome "ReadMe.txt" (deve estar localizado na primeira pasta) com as informações do projeto e com as principais instruções de como utilizar o projeto.

Entrega: o envio deve ser feito pelo classroom. Antes de enviar, limpe o projeto dos arquivos temporários e executável (Run->Batch Build Project->Clean), e exporte o projeto para ZIP (File->Export Project->To ZIP…). O código-fonte deve estar comentado, com uma descrição do projeto e com o nome dos autores.
