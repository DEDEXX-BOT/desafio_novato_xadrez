 #include <stdio.h>

 int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d" , &numero);

    if (numero > 0){
        if (numero % 2 == 0)
        { 
            printf("Numero par \n");
        } else {
            printf("numero impar\n");
        }

        printf("postivo");
    } else if (numero == 0){
        printf("Numero e zero\n");
        }
        else {
            printf("Numero e negativo");
        }
    }
    
