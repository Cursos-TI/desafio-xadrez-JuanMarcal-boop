#include <stdio.h>

// ==================== Função Recursiva da Torre ====================
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Torre: Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// ==================== Função Recursiva + Loops do Bispo ====================
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return; // condição de parada

    // loop externo: vertical
    for (int v = 0; v < 1; v++) {
        printf("Bispo: Cima\n");
        // loop interno: horizontal
        for (int h = 0; h < horizontal; h++) {
            printf("Bispo: Direita\n");
        }
    }

    // chamada recursiva reduzindo o movimento vertical
    moverBispo(vertical - 1, horizontal);
}

// ==================== Função Recursiva da Rainha ====================
void moverRainha(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Rainha: Esquerda\n");
    moverRainha(casas - 1);
}

// ==================== Função com Loops Aninhados do Cavalo ====================
void moverCavalo(int movimentos) {
    int movVertical = 2;   // duas casas para cima
    int movHorizontal = 1; // uma casa para a direita

    for (int i = 0; i < movimentos; i++) {
        for (int v = 0, h = 0; v <= movVertical || h <= movHorizontal; v++, h++) {
            if (v < movVertical && h == 0) {
                printf("Cavalo: Cima\n");
                continue; // vai continuar subindo até completar 2 casas
            }

            if (v == movVertical && h < movHorizontal) {
                printf("Cavalo: Direita\n");
            }

            if (v > movVertical || h > movHorizontal) {
                break; // sai do loop quando o movimento em L estiver completo
            }
        }
        printf("Cavalo: Movimento em L completo!\n");
    }
}

// ==================== Função Principal ====================
int main() {
    int casasTorre = 5;
    int casasBispoVertical = 3;
    int casasBispoHorizontal = 2;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    printf("===== MOVIMENTO DA TORRE =====\n");
    moverTorre(casasTorre);

    printf("\n===== MOVIMENTO DO BISPO =====\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    printf("\n===== MOVIMENTO DA RAINHA =====\n");
    moverRainha(casasRainha);

    printf("\n===== MOVIMENTO DO CAVALO =====\n");
    moverCavalo(movimentosCavalo);

    return 0;
}

