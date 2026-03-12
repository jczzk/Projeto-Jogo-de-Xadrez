# Movimentando as Peças do xadrez: Nivel Iniciante 1


Este projeto de nivel iniciante (1) foca na movimentação das peças de xadrez usando estruturas de repetição em C. 
Este é um programa em C que simule o movimento de três peças: Torre, Bispo e Rainha. Para cada peça, utilizei uma estrutura de repetição diferente entre (for, while ou do-while) para simular os movimentos.
O programa foi empresso no console à direção do movimento a cada casa percorrida pela peça.

 
Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
 
Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.


Requisitos funcionais adotados:

Entrada de Dados: Os valores para o número de casas a serem movidas foram definidos diretamente no código através de variáveis e constantes.
 
Lógica de Movimentação: Cada programa foi implementado à lógica de movimento específica de cada peça (Torre, Bispo, Rainha).
 
Saída de Dados: O programa foi empresso no console à direção do movimento a cada casa percorrida pela peça. 
Para movimentos na diagonal (Bispo), foi empresso a combinação de duas direções. Utilizando o comando printf para exibir as informações. 
As saídas foram seguidas ao padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n").
