#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoTorre(int casasTorre)
{
    if (casasTorre > 0){
        printf("Torre se Moveu: Direita\n"); // MOVIMENTAÇÃO DA TORRE

        movimentoTorre(casasTorre - 1);
    } else {
        printf("\n");
    }
    
}

void movimentoBispo(int casasBispo)
{
    if (casasBispo > 0) {       
    // LOOP EXTERNO PARA A VERTICAL
        for (int i = 0; i < 1; i++) {
            printf("Bispo se Moveu: Cima, ");  // MOVIMENTAÇÃO DO BISPO
            // LOOP INTERNO PARA A HORIZONTAL
            for (int j = 0; j < 1; j++) {
                printf("Direita\n"); // MOVIMENTAÇÃO DO BISPO
            }
        }
    movimentoBispo(casasBispo - 1);
    } else {
        printf("\n");
    }
}

void movimentoRainha(int casasRainha)
{
    if (casasRainha > 0){
        printf("Rainha se Moveu: Esquerda\n"); // MOVIMENTAÇÃO DA RAINHA

        movimentoRainha(casasRainha - 1);
    } else {
        printf("\n");
    }
    
}

int main() {
    int casasTorre = 5, casasBispo = 5, casasRainha = 8;
    int VERTICAL_CAVALO = 2;  
    int HORIZONTAL_CAVALO = 1;

    movimentoTorre(casasTorre);
    movimentoBispo(casasBispo);   // CHAMANDO AS FUNÇÕES DAS RECURSIVAS PARA OS MOVIMENTOS
    movimentoRainha(casasRainha);

int count = 0;

for (int i = 0; i < HORIZONTAL_CAVALO; i++) {
    for (int j = 0; j < VERTICAL_CAVALO; j++) {
        if (count == 2) {
            break;  // SAI DO LOOP INTERNO
        }
        printf("Cavalo se Moveu: Cima\n"); // MOVIMENTAÇÃO DO CAVALO
        count++;
    }
    printf("Cavalo se Moveu: Direita\n"); // MOVIMENTAÇÃO DO CAVALO
}

    return 0;
}