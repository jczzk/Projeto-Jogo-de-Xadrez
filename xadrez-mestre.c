#include <stdio.h>

/*
    Função recursiva para movimentação da TORRE.
    A torre se move apenas em linha reta. Neste exemplo,
    ela se moverá para a DIREITA o número de casas definido.
*/
void moverTorre(int casas)
{
    // Condição de parada da recursão
    if (casas <= 0)
        return;

    // Imprime o movimento da torre
    printf("Direita\n");

    // Chamada recursiva diminuindo uma casa
    moverTorre(casas - 1);
}

/*
    Função recursiva para movimentação da RAINHA.
    A rainha pode se mover em todas as direções.
    Neste exemplo ela será movida para CIMA.
*/
void moverRainha(int casas)
{
    // Condição de parada
    if (casas <= 0)
        return;

    printf("Cima\n");

    // Chamada recursiva
    moverRainha(casas - 1);
}

/*
    Função recursiva para movimentação do BISPO.
    O bispo se move na diagonal.
    Para representar diagonal usamos loops aninhados:
        - Loop externo -> movimento vertical
        - Loop interno -> movimento horizontal
*/
void moverBispo(int casas)
{
    // Condição de parada da recursividade
    if (casas <= 0)
        return;

    int vertical;
    int horizontal;

    // Loop externo (movimento vertical)
    for (vertical = 0; vertical < 1; vertical++)
    {
        // Loop interno (movimento horizontal)
        for (horizontal = 0; horizontal < 1; horizontal++)
        {
            // Movimento diagonal (cima + direita)
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    // Chamada recursiva para continuar o movimento
    moverBispo(casas - 1);
}

int main()
{
    /*
        Definição das casas diretamente no código
        conforme solicitado nos requisitos.
    */
    int casasTorre = 5;
    int casasBispo = 4;
    int casasRainha = 3;

    /*
        Movimento da TORRE
    */
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    /*
        Movimento do BISPO
    */
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    /*
        Movimento da RAINHA
    */
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    /*
        Movimento do CAVALO
        O cavalo se move em L:
        2 casas para cima e 1 para a direita.

        Aqui usamos loops aninhados e controle
        de fluxo com continue e break.
    */
    printf("Movimento do Cavalo:\n");

    int vertical;
    int horizontal;

    for (vertical = 1; vertical <= 2; vertical++)
    {
        // Caso ultrapasse 2 movimentos verticais interrompe
        if (vertical > 2)
            break;

        printf("Cima\n");

        for (horizontal = 1; horizontal <= 1; horizontal++)
        {
            // Controle de fluxo usando continue
            if (horizontal == 0)
                continue;

            printf("Direita\n");
        }
    }

    return 0;
}