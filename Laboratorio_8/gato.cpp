#include <stdio.h>

char tablero[3][3];
int fila;
int columna;
bool ganador = false;
int turnos = 0;

int main(){

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            tablero[i][j] = '-';
        }
    }

    printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

    while(!ganador && turnos < 9){
        
        if(turnos%2 == 0){
            do{
                printf("Jugador X -> Ingrese su jugada de la forma fila,columna:\n");
                scanf("%d,%d", &fila, &columna);
            }while( (!(tablero[fila-1][columna-1] == '-')) || ((fila > 3) || (columna > 3)) );
            tablero[fila - 1][columna - 1] = 'X'; 

        } else {
            do{
                printf("Jugador O -> Ingrese su jugada de la forma fila,columna:\n");
                scanf("%d,%d", &fila, &columna);
            }while((!(tablero[fila-1][columna-1] == '-')) || ((fila > 3) || (columna > 3)));
            tablero[fila - 1][columna - 1] = 'O'; 
        }

        printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

        // FILAS
        if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
            printf("GANADOR %c", tablero[0][1]);
            ganador = true;
        }
        if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
            printf("GANADOR %c", tablero[1][1]);
            ganador = true;
        }
        if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
            printf("GANADOR %c", tablero[2][1]);
            ganador = true;
        }

        // COLUMNAS
        if((tablero[0][0] == tablero[1][0]) && (tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
            printf("GANADOR %c", tablero[1][0]);
            ganador = true;
        }
        if((tablero[0][1] == tablero[1][1]) && (tablero[1][1] == tablero[2][1]) && (tablero[0][1] != '-')){
            printf("GANADOR %c", tablero[1][1]);
            ganador = true;
        }
        if((tablero[0][2] == tablero[1][2]) && (tablero[1][2] == tablero[2][2]) && (tablero[0][2] != '-')){
            printf("GANADOR %c", tablero[1][2]);
            ganador = true;
        }

        // DIAGONALES
         if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
            printf("GANADOR %c", tablero[1][1]);
            ganador = true;
        }
         if((tablero[0][2] == tablero[1][1]) && (tablero[1][1] == tablero[2][0]) && (tablero[0][2] != '-')){
            printf("GANADOR %c", tablero[1][1]);
            ganador = true;
        }

        turnos++;
    }
    
    return 0;
} 