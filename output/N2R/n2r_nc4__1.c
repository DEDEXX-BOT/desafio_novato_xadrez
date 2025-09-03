#include <stdio.h>

int main (){
    int variavel;

    printf("Digite um valor:\n");
    scanf("%d", &variavel);

    switch (variavel) {
    case 1:
        printf("Codigo a ser executado se variavel == 1\n");
        printf("Teste do case 1");
    break;
    case 2:
        printf("Codigo a ser executado se a variavel == valor2\n");
    break;
    default:
         printf("Codigo a ser executado se a varivavel nao for 1 ou nao for 2\n"); 

    }
 }