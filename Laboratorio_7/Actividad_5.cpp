#include <stdio.h>

int numero;
int resultado;

int main(){

    while(numero >= 0){
        resultado = resultado + numero;
        printf("Ingrese un numero: ");
        scanf("%i", &numero);
    }

    printf("La sumatoria es: %i", resultado);

    return 0;
}