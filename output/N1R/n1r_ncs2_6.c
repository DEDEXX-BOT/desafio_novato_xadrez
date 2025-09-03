#include <stdio.h>

int main(){

    int numero = 4, resultado;

    resultado = numero % 2;
    
    printf("A variavel resultado e: %d\n", resultado);

    if (numero % 2 == 0) {
        printf("O numero e par\n");
    }
}