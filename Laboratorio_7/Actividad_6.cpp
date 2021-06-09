#include <stdio.h>

int primer_numero = 0;
int segundo_numero = 1;
int resultado;

int numeros; 

int main(){

    printf("Ingrese un numero: ");
    scanf("%i", &numeros);

    printf("0\n1\n");

    for(int i = 0; i<numeros;i++){
        resultado = primer_numero + segundo_numero;
        printf("%i\n", resultado);
        primer_numero = segundo_numero;
        segundo_numero = resultado;
    }

    return 0;
}