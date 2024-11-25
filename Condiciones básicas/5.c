// Enunciado: Aprobado o reprobado: Solicita una calificación (0-100) y determina si es aprobatoria (>60).

#include <stdio.h>

int main(){
    int myCalificacion;
    printf("Ingrese una Calificación entre (0-100): ");
    scanf("%d",&myCalificacion);


    if (myCalificacion > 60 && myCalificacion <= 100 ) {
        printf("Usted a aprobado con una calificación de: %d\n",myCalificacion);
    }
    else if (myCalificacion < 0 ) {
        printf("Ingrese una Calificación valida en el rango de (0-100) \n");
    }
    else if (myCalificacion > 100) {
        printf("Ingrese una Calificación valida en el rango de (0-100) \n");
    }
    else {
        printf("Usted a reprobado con una calificación de: %d\n",myCalificacion);
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
