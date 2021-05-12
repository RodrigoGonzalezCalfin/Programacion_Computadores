#include <stdio.h>

char caracter;

int main() {
	printf("Por favor ingrese un caracter: ");
	scanf("%c", &caracter);
	printf("%c en codigo ASCII es : %i" , caracter, caracter);
	return 0;
}