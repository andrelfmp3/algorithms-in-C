#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero;

    printf("Forneca um numero maior ou igual a zero: ");
    scanf("%d", &numero);

    if(numero >= 0){
        for(int i = 0; i <= numero; i++ ){
            printf("%d ", i);
        }
    } else {
        printf("Valor incorreto (negativo)");
    }

    return 0; 
}