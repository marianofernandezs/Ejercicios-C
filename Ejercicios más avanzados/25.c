// Enunciado: Acceso a zona restringida: Verifica si el usuario tiene acceso según su rol (admin, usuario, visitante).

#include <ctype.h>
#include <stdio.h>

int main(){
    char myUser;
    printf("Ingrese su rol: ");
    scanf(" %c",&myUser);

    myUser  = tolower(myUser);

    if (myUser == 'a') {
        printf("Acceso Completo, Bienvenido Administrador \n");
    }
    else if (myUser == 'u') {
        printf("Acceso Limitado, Bienvenido Usuario \n");
    }
    else if (myUser == 'v') {
        printf("Acceso Denegado, Bienvenido Visitante \n");
    }
    else {
        printf("Error: Rol desconocido\n");
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
