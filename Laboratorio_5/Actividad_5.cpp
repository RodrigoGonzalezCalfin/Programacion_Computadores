# include <stdio.h>

float tarea_1 = 0;
float tarea_2 = 0;
float tarea_3 = 0;
float actitudinal = 0;
float prueba_1 = 0;
float prueba_2 = 0; 

int main() {

  printf("***********************\n");
  printf("------¡Bienvenido!-----\n");
  printf("***********************\n\n");

  printf("Por favor ingrese sus calificaciones de la forma x.x \n");
  printf("Tarea 1 : ");
  scanf("%f", & tarea_1);
  printf("Tarea 2 : ");
  scanf("%f", & tarea_2);
  printf("Tarea 3 : ");
  scanf("%f", & tarea_3);
  printf("Prueba 1  : ");
  scanf("%f", & prueba_1);
  printf("Actitudinal : ");
  scanf("%f", & actitudinal);

  prueba_2 = (4 - 0.1 * (tarea_1 + tarea_2 + tarea_3 + actitudinal) - prueba_1 * 0.25)/(0.35);

  printf("La nota mínima que debes obtener en la Prueba 2 para poder aprobar es %f", prueba_2);

  return 0;
}