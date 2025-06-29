Uma empresa deseja criar um sistema que classifique os candidatos a uma vaga de emprego com base em sua formação, experiência e habilidades. O sistema deve categorizar os candidatos da seguinte forma:

1. Candidato Rejeitado:
Idade menor que 18 anos.
Ou não possui formação acadêmica mínima exigida (Ensino Médio completo).
Ou possui menos de 1 ano de experiência e nenhuma certificação relevante.
2. Candidato Júnior:
Ensino Médio completo.
E pelo menos 1 ano de experiência ou uma certificação na área.
3. Candidato Pleno:
Ensino Superior completo.
E pelo menos 3 anos de experiência na área.
Ou pelo menos 1 ano de experiência, mas com duas ou mais certificações.
4. Candidato Sênior:
Ensino Superior completo.
E pelo menos 5 anos de experiência na área.
E pelo menos uma certificação.
Ou possui uma pós-graduação e pelo menos 3 anos de experiência.
O programa deve receber:
Idade do candidato
Nível de escolaridade (Nenhuma "0", Ensino Médio "1" , Superior "2", Pós-graduação "3")
Anos de experiência na área
Número de certificações relevantes
Exemplo de Entrada:
Idade: 28  
Escolaridade: 2                                                 // Digitar o valor 2 significa ter o Ensino Superior
Anos de experiência: 4  
Número de certificações: 2  

Saída esperada:
Classificação: Candidato Pleno

Comentários:
O código-fonte deve ter um cabeçalho no início com informações do projeto, como: local, data, autor, disciplina, objetivo, dentre outros. (O enunciado do exercício não é o objetivo.)
As linhas mais importantes do código-fonte devem estar comentadas, o que deve ser entre 5 e 7 linhas.

Entrega:
Envie somente o código-fonte em formato CPP nesta atividade do Classroom.
