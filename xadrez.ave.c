#include <stdio.h>

int main() {

    // Quantidade de casas que o cavalo deve se mover
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Variável de controle para o movimento horizontal
    int contadorEsquerda = 0;

    // Linha em branco para separar dos movimentos anteriores das outras peças
    printf("\n");

    /*
        Movimento do Cavalo em "L":
        - Primeiro: duas casas para baixo
        - Depois: uma casa para a esquerda

        Para cumprir o requisito de loops aninhados:
        - Usamos um loop FOR para controlar o movimento vertical (Baixo).
        - Dentro dele existe um loop WHILE que executará o movimento horizontal
          apenas quando o movimento vertical terminar.
    */

    for (int i = 1; i <= casasBaixo; i++) {

        // Imprime cada passo para baixo
        printf("Baixo\n");

        // Quando terminar as duas casas para baixo,
        // executa o movimento para a esquerda
        if (i == casasBaixo) {

            while (contadorEsquerda < casasEsquerda) {
                printf("Esquerda\n");
                contadorEsquerda++;
            }

        }
    }

    return 0;
}