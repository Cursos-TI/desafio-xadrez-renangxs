#include <stdio.h>

// Função recursiva para a Torre (movimento para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o Bispo (diagonal: cima e direita)
void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(vertical - 1, horizontal - 1);
}

// Movimento do Bispo com loops aninhados
void moverBispoComLoops(int vertical, int horizontal) {
    printf("\nMovimento do Bispo (com loops aninhados):\n");
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("Cima Direita\n");
            break; // Sai do loop interno após um movimento horizontal
        }
    }
}

// Função recursiva para a Rainha (movimento para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Cavalo com loops aninhados e controle com break/continue
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");
    int movimentosFeitos = 0;
    for (int i = 0; i < movimentos * 3; i++) {  // loop externo simula tentativa de jogadas
        for (int j = 0; j < 3; j++) {  // controle interno do "L"
            if (movimentosFeitos >= movimentos) break;

            if (j < 2) {
                printf("Cima\n");  // duas casas para cima
            } else {
                printf("Direita\n");  // uma casa para a direita
            }

            if (j == 2) {
                movimentosFeitos++;
            }
        }
        if (movimentosFeitos >= movimentos) break;
    }
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int movimentosCavalo = 3;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo, casasBispo);

    moverBispoComLoops(casasBispo, casasBispo); // loops aninhados

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    moverCavalo(movimentosCavalo); // loops complexos com break/continue

    return 0;
}
