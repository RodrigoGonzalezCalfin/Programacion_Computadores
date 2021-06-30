#include <stdio.h>

void imprimirMenu();
void imprimirOpciones();
float suma(float numero1, float numero2);
float resta(float numero1, float numero2);
float multiplicacion(float numero1, float numero2);
float division(float numero1, float numero2);
float division(float numero1, float numero2);
float calculadora(int operacion, float numero1, float numero2);

int opcion;
float numero1;
float numero2;
float resultado;

int main(){

    imprimirMenu();

    imprimirOpciones();

    printf("Seleccione la operación que desea realizar:\n");
    scanf("%d", &opcion);

    printf("Ingrese el primer número:\n");
    scanf("%f", &numero1); 
    printf("Ingrese el segundo número:\n"); 
    scanf("%f", &numero2); 

    if(numero2 == 0 && opcion == 4){
        printf("La division entre cero no esta definida.\n");
    }else{
        printf("El resultado es: %f\n", calculadora(opcion, numero1, numero2));
    }

    return 0;
}

float suma(float numero1, float numero2){
    float resultado = numero1 + numero2;
    return resultado;
}

float resta(float numero1, float numero2){
    float resultado = numero1 - numero2;
    return resultado;
}

float multiplicacion(float numero1, float numero2){
    float resultado = numero1 * numero2;
    return resultado;
}

float division(float numero1, float numero2){
    float resultado = numero1 / numero2;
    return resultado;
}

void imprimirMenu(){
    printf("┌───────────────────┐\n");
    printf("│    CALCULADORA    │\n");
    printf("└───────────────────┘\n");
}

void imprimirOpciones(){
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicación\n");
    printf("4.- División\n");
}

float calculadora(int operacion, float numero1, float numero2){
    switch(operacion){
        case 1: return suma(numero1, numero2);
                break;

        case 2: return resta(numero1, numero2);
                break;

        case 3: return multiplicacion(numero1, numero2);
                break;

        case 4:return division(numero1, numero2);
                break;

        default:
            printf("Opcion no valida\n");
            return -1;
    }
} 