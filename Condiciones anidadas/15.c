// Enunciado: Día de la semana: Ingresa un número (1-7) y muestra el día correspondiente (1 = Lunes, 2 = Martes...).

#include <stdio.h>

int main(){
    int myDay;
    printf("Porfavor ingrese un número del (1-7) para ver que día es \n");
    printf("Ingrese su número: ");
    scanf("%d",&myDay);

    if (myDay > 0 && myDay <= 7) {
        printf("Es posible ver el día correspondiente al número ingresado \n");
        if (myDay == 1 ) {
            printf("El día es Lunes y es el número : %d de la semana\n ",myDay);
        }
        else if (myDay == 2) {
            printf("El día es Martes y es el número : %d de la semana\n ",myDay);
        }
        else if (myDay == 3) {
            printf("El día es Miercoles y es el número : %d de la semana\n ",myDay);
        }
        else if (myDay == 4) {
            printf("El día es Jueves y es el número : %d de la semana\n ",myDay);
        }
        else if (myDay == 5) {
            printf("El día es Viernes y es el número : %d de la semana\n ",myDay);
        }
        else if (myDay == 6) {
            printf("El día es Sabado y es el número : %d de la semana\n ",myDay);
        }
        else{
            printf("El día es Domingo y es el número : %d de la semana\n ",myDay);
        }
    }
    else {
        printf("Su número debe ser mayor a 0 y entre un rango de (1 a 7) \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
