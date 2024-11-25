// Enunciado: Número dentro de rango: Comprueba si un número está entre 10 y 50.

#include <stdio.h>

int main(){
    int myNum;
    printf("Ingrese un número para verificar si esta en el rango de (10-50): ");
    scanf("%d",&myNum);

    if (myNum >= 10 && myNum <= 50) {
        printf("El número ingresado se encuentra en el rango de (10-50) \n");
    }
    else {
        printf("El número ingresado no se encuentra en el rango de (10-50) \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
