1ª linha: P2 (código de formato da imagem)
2ª linha: #_Created_by_IrfanView (apenas uma informação, delete do arquivo para usar no projeto)
3ª linha: 600 404 (número de colunas e número de linhas da imagem)
4ª linha: 255 (valor máximo do tom de cinza no pixel)
demais: valor do tom de cinza de cada pixel, começando no canto superior esquerdo, percorrendo para a direita e depois para a linha de baixo, recomeçando na esquerda

Os valores são separados por espaços e quebras de linha.



Objetivo: adquirir conhecimentos de manipulação de 

matrizes (imagens) com ponteiros implementando funcionalidades que geram novas matrizes (imagens) a partir de valores carregados de arquivos-texto em formato PGM de representação de imagens.

Descrição: o aplicativo desenvolvido no projeto deve ter um menu de opções que permita ler a imagem de entrada na opção 1 em formato PGM e, para cada operação implementada gere um novo arquivo-texto de mesmo formato PGM com um outro nome.

Arquivo de Imagem PGM:
1ª linha: string “P2”;
2ª linha: quantidade de colunas em inteiro, seguida de um espaço e seguida de quantidade de linhas em inteiro;
3ª linha: o valor máximo de tons de cinza em inteiros;
da 4ª linha em diante: valores inteiros de todos os pixels da imagem entre zero e o valor máximo de tons de cinza da 3ª linha, separados por espaços;
exclua dos arquivos de entrada todas as linhas com #.
Requisitos: o aplicativo deverá:
ler uma imagem de entrada criada pelos autores em formato PGM;
criar um menu de operações que serão realizadas sobre a imagem de entrada indicada;
cada operação deve estar em uma função C/C++;
os comandos cin e cout só podem ser utilizados na função main;
escrever um arquivo-texto de saída para cada operação realizada;
para todas as operações os valores de tons de cinza dos pixels devem resultar entre zero e o valor máximo.
As operações que devem ser feitas são:
escurecer ou clarear imagem por um fator informado pelo usuário;
rotacionar a imagem para a esquerda e para a direita e em torno da linha horizontal e da linha vertical;
encontrar a imagem negativa;
binarizar a imagem por um limiar informado pelo usuário, ou seja, valores menores que o limiar serão zero e valores maiores que o limiar serão o valor máximo;
iconizar a imagem, ou seja, reduzir a imagem de entrada para uma imagem de 64 x 64 pixels.
Instruções para entrega: o envio deve ser feito pelo classroom. Antes de enviar, limpe o projeto dos arquivos temporários e executável (Run->Batch Build Project->Clean), e exporte o projeto para ZIP (File->Export Project->To ZIP…). O código-fonte deve estar comentado, com uma descrição do projeto e com o nome dos autores.

Importante: o projeto poderá ser feito individualmente ou em dupla. Utilize uma ferramenta de IA para gerar o arquivo-texto em formato PGM de uma imagem pessoal.

