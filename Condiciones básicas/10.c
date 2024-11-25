// Enunciado: Letra vocal o consonante: Pide una letra y determina si es vocal o consonante.

#include <stdio.h>

int main(){
    char myLetra;
    printf("Ingrese su letra en mayuscula porfavor: ");
    scanf("%c",&myLetra);

    if (myLetra == 'A' || myLetra == 'E' || myLetra =='I' || myLetra =='O' || myLetra =='U') {
        printf("Tu letra es una vocal \n");
    }
    else if (myLetra == 'a' || myLetra == 'e' || myLetra =='i' || myLetra =='o' || myLetra =='u') {
        printf("Tu letra es una vocal \n");
    }
    else {
        printf("Tu letra no es una vocal, Tu letra es una consonante \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
