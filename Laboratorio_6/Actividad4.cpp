#include <stdio.h>

int edad;
int destino;

int main(){

    printf("Ingrese su edad: ");
    scanf("%i", &edad);
    printf("Ingrese su destino: ");
    scanf("%i", &destino);

    if(destino == 1){
        if(edad <= 15){
            printf("Cancela 2500");
        }else if(edad < 65){
            printf("Cancela 4200");
        }else{
            printf("Cancela 3000");
        }
    }

    else if(destino == 2){
        if(edad <= 15){
            printf("Cancela 1200");
        }else if(edad < 65){
            printf("Cancela 3000");
        }else{
            printf("Cancela 2000");
        }
    }

    else if(destino == 3){
        if(edad <= 15){
            printf("Cancela 2000");
        }else if(edad < 65){
            printf("Cancela 3800");
        }else{
            printf("Cancela 2500");
        }
    }
    else{
        printf("El destino ingresado no es valido.");
    }

    return 0;
}