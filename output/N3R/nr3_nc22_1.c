 f#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char tipoComparacao;
    int numeroJogador, numeroComputador, resultado = 0;

    printf("*** Bem-vindo ao jogo Maior, Menor ou Igual! ***\n");
    printf("Voce deve escolher um numero e o tipo de comparacao!\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparacao: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite seu numero (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    // Gerar número aleatório para o computador
    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("O numero do computador e: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
        case 'M':
        case 'm':
            printf("Voce escolheu a opcao MAIOR!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0; 
            break;

        case 'N':
        case 'n':
            printf("Voce escolheu a opcao MENOR!\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            break;

        case 'I':
        case 'i':
            printf("Voce escolheu a opcao IGUAL!\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            break;

        default:
            printf("Opcao invalida!\n");
            return 1; // encerra o programa
    }

    printf("O numero do computador e: %d e o do jogador e: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1) {
        printf("Parabens, voce venceu!\n");
    } else {
        printf("Infelizmente, voce perdeu!\n");
    }
    
    return 0;
}
