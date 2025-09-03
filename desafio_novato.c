#include <stdio.h>

/*
    Programa: Simulação de movimentos de peças de xadrez (Torre, Bispo e Rainha)

    Objetivo:
    - Demonstrar o uso de diferentes estruturas de repetição (for, while, do-while).
    - Simular o movimento de peças de xadrez:
        - Torre: 5 casas para a direita (for)
        - Bispo: 5 casas na diagonal para cima e à direita (while)
        - Rainha: 8 casas para a esquerda (do-while)
*/

int main () {
    
    int casas_torre = 5;  //Anda 5 casas para a Direita
    printf("\nMovimento de casas da torre:\n");
    for (int i = 1; i <= casas_torre; i++){
        printf("Direita\n");
    }

    int casas_bispo = 5;  // Anda 5 casas na diagonal para cima e à direita
    int passo_bispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (passo_bispo <= casas_bispo){
        printf("Cima, Direita\n");
        passo_bispo++;
    }

    int casas_rainha = 8;  //Anda 8 casas para a Esquerda
    int k = 1;
     printf ("\nMovimento da Rainha:\n"); 
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casas_rainha);
    
    return 0;
}