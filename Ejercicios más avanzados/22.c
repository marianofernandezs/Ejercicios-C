// Enunciado: Número en palabras: Muestra en texto el número ingresado (1 = Uno, 2 = Dos... hasta 5).

#include <stdio.h>

int main(){
    int num;
    printf("Ingrese un número en el rango de (1 - 5): ");
    scanf("%d",&num);


    if (num > 0 && num <= 5) {
        if (num == 1) {
            printf("El número ingresado es Uno\n");
        }
        else if (num == 2 ) {
            printf("El número ingresado es Dos\n");
        }
        else if (num == 3) {
            printf("El número ingresado es Tres\n");
        }
        else if (num == 4) {
            printf("El número ingresado es Cuatro\n");
        }
        else {
            printf("El número ingresado es Cinco\n");
        }
    }
    else {
        printf("Error ingresa un número dentro del rango de (1-5)\n");
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
