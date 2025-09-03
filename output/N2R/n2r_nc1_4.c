#include <stdio.h>

int main (){

    int idade = 10;
    float altura = 1.75;

    //idade >= 10 => falso
    // idade <= 30 => Verdadeira
    //falso && altura > 1.70
    //falso && Verdadeira => falso

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("voce esta na faixa etaria e tem a altura adequada\n");
    } else {
        printf ("voce nao atende a faixa aos criterios\n");

    }
}