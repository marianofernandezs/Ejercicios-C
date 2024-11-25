// Enunciado: Positivo, negativo o cero: Pide un número al usuario y verifica si es positivo, negativo o cero.

#include <stdio.h>

int main(){
    int myNum;
    printf("Ingrese un número para verificar si es positivo, negativo o si es cero : ");
    scanf("%d",&myNum);

    if (myNum > 0 ) {
        printf("Tu número es positivo\n");
    }
    else if (myNum == 0) {
        printf("Tu número es cero\n");
    }
    else {
        printf("Tu número es negativo\n");
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
