#include <stdio.h>

int clave_rut = 20644440;
int intento_clave;

int main(){
	printf("Ingrese clave: ");
	scanf("%i", &intento_clave);

	if(intento_clave != clave_rut){
		printf("¡Incorrecto!\n");
		printf("Intentelo nuevamente: ");
		scanf("%i", &intento_clave);

			if(intento_clave != clave_rut){
				printf("¡Incorrecto!\n");
				printf("Intentelo nuevamente: ");
				scanf("%i", &intento_clave);
				
					if(intento_clave != clave_rut){
						printf("¡Usuario Bloqueado!");
					}else{
						printf("¡Bienvenido!");
					}
			}else{
				printf("¡Bienvenido!");
			}

	}else{
		printf("¡Bienvenido!");
	}
	return 0;
}