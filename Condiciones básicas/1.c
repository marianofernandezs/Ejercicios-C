// Enunciado: Número par o impar: Escribe un programa que determine si un número es par o impar.

#include <stdio.h>

int main(){
    int myNum;
    printf("Ingrese un número para verificar si es par o impar: ");
    scanf("%d",&myNum);

    if (myNum % 2 == 0) {
        printf("Tu número es par\n");
    }
    else {
        printf("Tu número es impar\n");
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
