#include <stdio.h>
int main (){


    int idade, renda; 

/*
programa que verifica se uma pessoa está qualificada para um desconto especial com base na idade e na renda mensal.
A pessoa deve ter mais de 60 anos ou menos de 18 e ter uma renda mensal abaixo de 2000*/

printf("Digite a sua idade: ");
scanf ("%d", &idade);
printf("Digite a sau renda mensal: ");
scanf("%f", &renda);

if (idade <= 18 || idade >= 60)
{
    printf("Aceito com relacao a idade\n");
} else {
    printf("voce nao atende aos criterios devido a idade!\n");

}
    if (renda < 2000)
        { 
        printf("Voce tem direito ao desconto!\n");
    } else {
        printf("Voce nao tem direito ao desconto! ");
    }

}