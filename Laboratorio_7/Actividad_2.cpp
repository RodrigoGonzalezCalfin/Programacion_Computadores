#include <stdio.h>

int numero_uno;
int numero_dos;
int resultado;

int main(){

    printf("Ingrese dos numeros de la forma X, Y\n");
    scanf("%i, %i", &numero_uno, &numero_dos);

    for(int i = 0; i<numero_uno; i++){
        resultado = resultado + numero_dos;
    }

    printf("%i por %i es %i", numero_uno, numero_dos, resultado);

    return 0;
}