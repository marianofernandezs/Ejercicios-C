// Enunciado: Sistema de calificaciones: Pide calificaciones de tres materias y determina si el promedio es aprobatorio.

#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    float res;

    printf("Porfavor Ingrese Tres calificaciones dentro del rango de 1-100 \n");
    printf("Ingrese la primera calificacion: ");
    scanf("%d",&x);
    printf("Ingrese la segunda calificacion: ");
    scanf("%d",&y);
    printf("Ingrese la tercera calificacion: ");
    scanf("%d",&z);

    if (x > 0 && x <= 100 && y > 0 && y <= 100 && z <= 100 && z > 0 ) {
        printf("Las calficaciones son validas en la escala de (1 - 100)\n");
        res = (x+y+z)/ 3;
        if (res >= 60) {
            printf("Aprobado con un promedio de: %f \n",res);
        }
        else {
            printf("Reprobado con un promedio de: %f \n",res);
        }

    }
    else {
        printf("Las calificaciones ingresadas no son validas en la escala de (1 - 100)\n");
    }

     printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
