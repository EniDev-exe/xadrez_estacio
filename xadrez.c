#include <stdio.h>

//Simulação de movimentação de xadrez avançada por Enivaldo Oliveira
// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimento complexo do Cavalo
void moverCavalo() {
    // Loop externo para movimento vertical (2 casas para cima)
    for (int vertical = 0; vertical < 2; vertical++) {
        // Condição complexa para demonstrar uso de break/continue
        if (vertical == 1) {
            printf("Cima (segunda parte do L)\n");
            continue;
        }
        printf("Cima\n");
    }
    
    // Loop interno para movimento horizontal (1 casa para direita)
    int horizontal = 0;
    while (1) {  // Loop infinito controlado por break
        printf("Direita\n");
        if (++horizontal >= 1) break;
    }
}

// Função para movimento do Bispo com loops aninhados
void moverBispoAninhado(int casas) {
    // Loop externo para controle do número de movimentos
    for (int i = 0; i < casas; i++) {
        // Loop interno para simular movimento diagonal
        int j = 0;
        while (j < 2) {  // 2 passos (vertical e horizontal)
            if (j == 0) printf("Cima, ");
            else printf("Direita\n");
            j++;
        }
    }
}

int main() {
    // Movimento da Torre com recursividade 
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo com recursividade 
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimento do Bispo com loops aninhados 
    printf("Movimento do Bispo:\n");
    moverBispoAninhado(5);
    printf("\n");

    // Movimento da Rainha com recursividade 
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento complexo do Cavalo 
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
