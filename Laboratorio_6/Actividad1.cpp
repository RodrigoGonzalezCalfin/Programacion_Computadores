# include <stdio.h>

int numero = 0;

int main(){
	printf("Igrese un numero: ");
	scanf("%i", &numero);
	
	if (numero % 2 == 0){
		printf("El numero ingresado es par");
	}else{
		printf("El numero ingresado es impar");
	}
	return 0;
}