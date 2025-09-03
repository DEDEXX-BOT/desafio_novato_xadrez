#include <stdio.h>

int main(){
    
    int a = 5;
    int b = 10;
    int c = 1;

    // a > 0 => Verdadeiro
    // a < 0 => Falso
    // Verdadeiro && falso => Falso
    // Falso || c == 0
    // Falso || Falso => falso


    if (a > 0 && b < 0 || c == 0) {
        printf("A condicao e verdadeira\n");
        } else {
        printf("A condicao e falsa\n");  
        }
    }