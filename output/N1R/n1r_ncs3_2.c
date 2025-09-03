#include <stdio.h>
int main (){
    int numero = 11;
    int resultado;

    resultado = numero % 2; 
  
    if (numero % 2 == 0) {
        printf("O numero e par\n");
    } else {
        printf("O numero e impar\n");
     }
}