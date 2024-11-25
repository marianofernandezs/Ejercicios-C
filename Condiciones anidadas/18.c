// Enunciado: Calificación basada en puntaje: Convierte un puntaje (0-100) en una calificación (Excelente, Bueno, Regular, Malo).

#include <stdio.h>

int main(){
    int myPuntaje;
    printf("Porfavor ingrese un puntaje entre (0-100) para calificarlo \n");
    printf("Ingrese su puntaje: ");
    scanf("%d",&myPuntaje);

    if (myPuntaje >= 0 && myPuntaje <= 100) {
        printf("Es posible asignar una califiación \n");
        if (myPuntaje >= 0 && myPuntaje < 25) {
            printf("Su calficación es Mala \n");
        }
        else if (myPuntaje >= 25 && myPuntaje < 50) {
            printf("Su calficación es Regular \n");
        }
        else if (myPuntaje >= 50 && myPuntaje < 75) {
            printf("Su calficación es Buena \n");
        }
        else {
            printf("Su calficación es Excelente \n");
        }
    }
    else {
        printf("Su Puntaje es invalido porfavor intente nuevamente \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
