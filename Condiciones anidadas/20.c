// Enunciado: Validar año bisiesto: Verifica si un año ingresado es bisiesto.

#include <stdio.h>

int main(){
    int myYear;
    printf("Porfavor ingrese su año para verificar si es bisiesto o no \n");
    printf("Ingrese su año: ");
    scanf("%d",&myYear);

    if (myYear % 4 == 0 && myYear % 100 != 0 || myYear % 400 == 0) {
        printf("Su año es bisiesto \n");
    }
    else {
        printf("Su año ingresado no es bisiesto porfavor intente nuevamente \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
