#include <stdio.h>

int main() {

    // =========================
    // Movimento da TORRE (for)
    // =========================
    // A torre irá se mover 5 casas para a direita
    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }


    // ==========================
    // Movimento do BISPO (while)
    // ==========================
    // O bispo irá se mover 5 casas na diagonal (cima e direita)
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");

    while(contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }


    // =========================
    // Movimento da RAINHA (do-while)
    // =========================
    // A rainha irá se mover 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha <= casasRainha);


    return 0;
}
