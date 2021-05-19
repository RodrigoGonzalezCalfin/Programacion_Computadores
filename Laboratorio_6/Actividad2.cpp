# include <stdio.h>

int primer_numero;
int segundo_numero;
int tercer_numero;

int main(){

	printf("Ingrese el primer numero: ");
	scanf("%i", &primer_numero);
	printf("Ingrese el segundo numero: ");
	scanf("%i", &segundo_numero);
	printf("Ingrese el tercer numero: ");
	scanf("%i", &tercer_numero);

	if(primer_numero<segundo_numero && tercer_numero<segundo_numero){
		printf("El segundo numero es el mayor");
	}
	else if(primer_numero<tercer_numero && segundo_numero<tercer_numero){
		printf("El tercer numero es el mayor");
	}
	else if(segundo_numero<primer_numero && tercer_numero<primer_numero){
		printf("El primer numero es el mayor");


	}else if(primer_numero == segundo_numero and segundo_numero ==tercer_numero){
		printf("Los numeros ingresados son iguales");
	}else if(primer_numero == segundo_numero){
		printf("El primer y segundo numero son los mayores y, son iguales.");
	}else if(primer_numero == tercer_numero){
		printf("El primer y el tercer numero son los mayores y, son iguales.");
	}else{
		printf("El segundo y tercer numero son los mayores y, son iguales.");
	}

	return 0;
}