// Enunciado: Calculadora simple: Pide dos números y una operación (+, -, *, /) y realiza la operación.

#include <stdio.h>

int main(){
    int opc;
    int x;
    int y;
    int res;
    printf("Bienvenido a la calculadora de Mariano \n");
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multipliacion\n");
    printf("4.- Division\n");
    printf("Ingrese la operacion a utilizar: ");
    scanf("%d",&opc);
    printf("Ingrese el valor de x: ");
    scanf("%d",&x);
    printf("Ingrese el valor de y: ");
    scanf("%d",&y);

    if (opc <= 4 && opc >= 1) {
        printf("Opcion Ingresada Valida \n");

        if (opc == 1) {
            res = x+y;
            printf("El resultado de la suma es: %d ",res);
        }
        else if (opc == 2) {
            res = x-y;
            printf("El resultado de la resta es: %d ",res);
        }
        else if (opc == 3) {
            res = x*y;
            printf("El resultado de la multiplicación es: %d ",res);
        }
        else if (opc == 4 && y != 0) {
            res = x/y;
            printf("El resultado de la division es: %d ",res);
        }
        else if (opc == 4 && y == 0) {
            printf("Error en la division no se puede dividir por 0 \n");
        }
    }
    else {
        printf("La opcion ingresada no es valida porfavor intente nuevamente \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
