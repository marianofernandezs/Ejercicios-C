// Enunciado: Número divisible: Verifica si un número ingresado por el usuario es divisible entre otro número.

#include <stdio.h>

int main(){
    int myDividendo;
    int myDivisor;
    printf("Ingrese el dividendo: ");
    scanf("%d",&myDividendo);
    printf("Ingrese el divisor: ");
    scanf("%d",&myDivisor);

    if (myDivisor == 0) {
        printf("Error no se puede dividir por 0 \n");
    }
    else if (myDividendo % myDivisor == 0) {
        printf("Los números anteriormente ingresados se pueden divir entre sí \n");
    }
    else {
        printf("Los números anteriormente ingresados no se pueden divir entre sí \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
