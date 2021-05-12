# include <stdio.h>

float primer_numero;
float segundo_numero; 
float resultado;

int main() {
  printf("Por favor ingrese dos numeros decimales de la forma X.X,Y.Y\n");
  scanf("%f,%f", &primer_numero, &segundo_numero);
  resultado = primer_numero * segundo_numero;
  printf("La multiplicacion de %f con %f es %f\n",primer_numero, segundo_numero, resultado);
  return 0;
}