#include <stdio.h>

int numero;
int contador;

int main(){

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    for(int i = 1; i<numero; i++){
        contador = 0;
        for(int e = 1; e<=numero; e++){
            if(i % e == 0){
                contador = contador + 1;
            }
        }
        if(contador == 2){
            printf("%i\n", i);
        }
    }

    return 0;
}