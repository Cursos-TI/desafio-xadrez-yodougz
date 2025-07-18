#include <stdio.h>

int main() {
    // Simulação da Torre usando FOR
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Simulação do Bispo usando WHILE
    int movimentoBispo = 5;
    int iBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (iBispo < movimentoBispo) {
        printf("Cima Direita\n");
        iBispo++;
    }

    // Simulação da Rainha usando DO-WHILE
    int movimentoRainha = 8;
    int iRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        iRainha++;
    } while (iRainha < movimentoRainha);

    return 0;
}