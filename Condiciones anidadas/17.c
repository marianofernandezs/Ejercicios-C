// Enunciado: Validar contraseña: Pide al usuario una contraseña y verifica si coincide con una predefinida.

#include <stdio.h>

int main(){
    int myPass;
    int myTryPass;
    myPass = 7;
    printf("Porfavor ingrese un número del (1-12) para poder acceder \n");
    printf("Ingrese su contraseña: ");
    scanf("%d",&myTryPass);

    if (myTryPass > 0 && myTryPass <= 12) {
        printf("Es posible ingresar la contraseña \n");
        if (myTryPass == 7) {
            printf("Acceso Autorizado contraseña coincide \n");
        }
        else {
            printf("Contraseña Incorrecta \n");
        }
    }
    else {
        printf("Su Contraseñ debe ser mayor a 0 y entre un rango de (1 a 12) \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
