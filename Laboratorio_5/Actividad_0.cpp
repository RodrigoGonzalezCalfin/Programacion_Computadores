# include <stdio.h>

int primer_numero = 0;
int segundo_numero = 0; 
int resultado = 0;

int main() {
  printf("Por favor ingrese el primer número: ");
  scanf("%i", &primer_numero);
  printf("Por favor ingrese el segundo número: ");
  scanf("%i", &segundo_numero);
  resultado = primer_numero + segundo_numero;
  printf("La suma entre %i y %i es %i",primer_numero, segundo_numero, resultado);
  return 0;
}