#include <stdio.h>

int main() {

    const int quantidade_movimentos_bispo_torre = 5;
    const int quantidade_movimentos_rainha = 8;

    printf("Movimentos do Bispo:\n");
    for (int movimentos = 0; movimentos < quantidade_movimentos_bispo_torre; movimentos++) {
        printf("Direita, Cima\n");
    }

    int movimentos = 0;

    printf("\nMovimentos da Torre:\n");
    do {
        printf("Direita\n");
        movimentos++;
    } while (movimentos < quantidade_movimentos_bispo_torre);

    movimentos = 0;

    printf("\nMovimentos da Rainha:\n");
    while (movimentos < quantidade_movimentos_rainha) {
        printf("Esquerda\n");
        movimentos++;
    }

    return 0;
}
