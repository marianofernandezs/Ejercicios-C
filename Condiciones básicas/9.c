// Enunciado: Edad para conducir: Verifica si una persona tiene 18 años o más para poder conducir.

#include <stdio.h>

int main(){
    int myEdad;
    printf("Ingrese su edad: ");
    scanf("%d",&myEdad);

    if (myEdad <= 0) {
        printf("Error no se puede tener una edad de 0 o tener una edad negativa \n");
    }
    else if (myEdad >= 18) {
        printf("Felicidades tienes la edad correspondiente para poder conducir\n");
    }
    else {
        printf("No tienes la edad suficiente para poder conducir\n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
