#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
     int opcao, regras;
     int numeroSecreto, palpite;
    
printf ("Menu Principal\n");
printf ("1. Iniciar jogo\n");
printf ("2. Ver Regras\n");
printf("3. Sair\n");
printf("Escolha uma opcao:");
scanf("%d", &opcao);


switch (opcao)
{
case 1:
srand(time(0));
numeroSecreto = rand() % 10;
printf("Digite um numero de 0 a 9: ");
scanf("%d", &palpite);
if (numeroSecreto == palpite)
{
    printf("Voce acertou!\n");
    printf("numero secreto %d\n,", numeroSecreto);
} else {
    printf("Voce errou!\n");
    printf("numero secreto %d\n,", numeroSecreto);
}
    printf("Execucao do jogo\n");
    break;
case 2:
    printf ("A explicacao das regras!\n");
    printf("Digite a opcao relacionada as regras do jogo\n");
    scanf("%d", &regras);
    switch (regras)
    {
    case 1:
        printf("Regra 1");
        break;
        case 2:
        printf("Regra 2");
        break;
    
    default:
        break;
    }
    break;
case 3:
    printf ("Saindo do jogo.....\n");
    break;
default:
    printf("Opcao invalida.....\n");
    break;
}
}