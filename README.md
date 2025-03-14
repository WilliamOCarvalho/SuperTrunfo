# SuperTrunfo

Este programa em C foi desenvolvido para coletar e exibir informações sobre duas cidades, criando uma "carta" com dados relevantes. O usuário será solicitado a inserir dados de duas cidades e o programa exibirá todas as informações relacionadas a essas cidades de forma estruturada.

Funcionalidade
O programa coleta as seguintes informações de duas cidades diferentes:

Estado da cidade (representado por uma letra, de A a H)
Código da carta (no formato A01, B02, etc.)
Nome da cidade
População
Área (em km²)
PIB (em bilhões de reais)
Número de pontos turísticos
Após a coleta dos dados, o programa exibe as informações de cada cidade de forma organizada.

Estrutura do Código
1. Entrada de Dados
O programa solicita ao usuário que insira os dados de duas cartas de cidades.
Utiliza o scanf() para ler os dados primários, como estado, código da carta, população, área, PIB, e número de pontos turísticos.
Para o nome da cidade, o fgets() é utilizado para garantir a leitura de strings com espaços.
2. Exibição de Resultados
Após a coleta de dados para ambas as cartas, o programa exibe as informações em um formato estruturado, indicando qual cidade corresponde a cada carta.
Exemplo de Execução
Entrada:
Digite o estado da primeira carta (A-H): A
Digite o Código da primeira carta (ex: A01): A01
Digite o nome da cidade: São Paulo
Digite a população da cidade: 12300000
Digite a área da cidade (em km²): 1521.1
Digite o PIB da cidade (em bilhões de reais): 2200.5
Digite o número de pontos turísticos: 50

Digite o estado da segunda carta (A-H): B
Digite o Código da segunda carta (ex: B02): B02
Digite o nome da cidade: Rio de Janeiro
Digite a população da cidade: 6750000
Digite a área da cidade (em km²): 1182.3
Digite o PIB da cidade (em bilhões de reais): 600.3
Digite o número de pontos turísticos: 35

Saída:
======= Carta 1 =======
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12300000
Área: 1521.10 km²
PIB: 2200.50 bilhões de reais
Número de Pontos Turísticos: 50

======= Carta 2 =======
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6750000
Área: 1182.30 km²
PIB: 600.30 bilhões de reais
Número de Pontos Turísticos: 35

Notas
O programa usa scanf() para capturar as entradas do usuário, mas é importante garantir que o buffer de entrada seja gerido corretamente, o que é feito com o getchar() após o uso do scanf().
O fgets() é utilizado para capturar o nome da cidade, permitindo o uso de espaços, o que pode ser um desafio ao utilizar apenas scanf().
Tecnologias Usadas
Linguagem: C
Funções: scanf(), fgets(), getchar()
Possíveis Melhorias
Validação de Dados: O código pode ser aprimorado com validação de entradas para garantir que o usuário insira valores válidos para cada campo (por exemplo, impedir a entrada de textos para campos numéricos).
Armazenamento em Arquivo: A possibilidade de salvar os dados das cartas em um arquivo pode ser uma boa melhoria para persistência de informações.
