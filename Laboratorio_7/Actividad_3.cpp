#include <stdio.h>

int numero;

int main(){

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    for(int i = 1; i<=numero; i++){
        if(numero % i == 0){
            printf("%i\n", i);
        }
    }

    return 0;
}