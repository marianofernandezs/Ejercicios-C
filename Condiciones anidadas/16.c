// Enunciado: Identificar estaciones del año: Pide un mes (1-12) y muestra la estación (verano, invierno, etc.).

#include <stdio.h>

int main(){
    int myMes;
    printf("Porfavor ingrese un número del (1-12) para ver en que estación del año es \n");
    printf("Ingrese su número: ");
    scanf("%d",&myMes);

    if (myMes > 0 && myMes <= 12) {
        printf("Es posible ver la estación correspondiente al número ingresado \n");
        if (myMes == 1 || myMes == 2 ||myMes == 12 ) {
            printf("La estación verano \n ");
        }
        else if (myMes == 3 || myMes == 4 || myMes == 5 ) {
            printf("La estación otoño \n ");
        }
        else if (myMes == 6 ||myMes == 7 ||myMes == 8 ) {
            printf("La estación invierno \n ");
        }
        else if (myMes == 9 || myMes == 10 ||myMes == 11 ) {
            printf("La estación primavera \n ");
        }
    }
    else {
        printf("Su número debe ser mayor a 0 y entre un rango de (1 a 12) \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
