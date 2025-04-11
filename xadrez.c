#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    int i;
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (cima e direita)
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < 8);

    // Movimento do Cavalo: "L" → duas casas para baixo, uma casa para a esquerda
    // Usaremos um loop 'for' para as jogadas do cavalo (por exemplo, simular 3 movimentos em "L")
    // Dentro dele, usamos um loop 'while' para cada etapa do movimento

    const int movimentosCavalo = 2; // Quantas vezes o Cavalo faz o movimento completo de "L"
    const int casasBaixo = 2;
    const int casasEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");
    for (int jogada = 0; jogada < movimentosCavalo; jogada++) {
        // Move duas casas para baixo
        int passoBaixo = 0;
        while (passoBaixo < casasBaixo) {
            printf("Baixo\n");
            passoBaixo++;
        }

        // Move uma casa para a esquerda
        int passoEsquerda = 0;
        while (passoEsquerda < casasEsquerda) {
            printf("Esquerda\n");
            passoEsquerda++;
        }
    }

    return 0;
}
