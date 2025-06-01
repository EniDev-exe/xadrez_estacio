#include <stdio.h>

//Sistema de movimentação Xadrez Enivaldo Oliveira
int main() {
    //Movimentação da Torre com For
    printf("Movimento da Torre:\n");
    for(int casas_torre = 0; casas_torre < 5; casas_torre++){
        printf("Direita\n");
    }
    printf("\n");
    
    //Movimentação do Bisco com While
    printf("Movimento do Bispo:\n");
    int casas_bispo = 0;
    while(casas_bispo < 5){
        printf("Cima, direita\n");
        casas_bispo++;
    }
    printf("\n");
    
    //Movimentação da Rainha com do-While
    printf("Movimento da Rainha:\n"); 
    int casas_rainha = 0;
    do{
        printf("Esquerda\n");
        casas_rainha++;
    }while (casas_rainha <8);
    printf("\n");
    
    // Movimentação do Cavalo com loops aninhados
    printf("Movimento do Cavalo:\n");
    
    // Primeira parte do L: 2 movimentos para baixo com For
    for (int casas_cavalo = 0; casas_cavalo < 2; casas_cavalo++) {
        printf("Baixo\n");
    }
    
    // Segunda parte do L: 1 movimento para esquerda com While
    int movimentoLateral = 0;
    while (movimentoLateral < 1) {
        printf("Esquerda\n");
        movimentoLateral++;
    }

    
    return 0;
}
