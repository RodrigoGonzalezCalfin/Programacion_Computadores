# include <stdio.h>

float radio_circunferencia = 0;
float numero_pi = 3.14159 ; 
float area = 0;
float perimetro;

int main() {

  printf("Por favor ingrese el radio de una circunferencia: ");
  scanf("%f", &radio_circunferencia);
  area = numero_pi * radio_circunferencia * radio_circunferencia;
  perimetro = 2 * numero_pi * radio_circunferencia;
  printf("El area de la circunferencia es: %f\nEl perimetro de la circunferencia es %f", area, perimetro);

  return 0;
}