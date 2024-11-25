// Enunciado: Mayor de dos números: Solicita dos números y muestra cuál es el mayor.

#include <stdio.h>

int main(){
    int x;
    int y;
    printf("Ingrese un número para verificar que número es mayor entre x e y \n");
    printf("Ingrese un número para x: ");
    scanf("%d",&x);
    printf("Ingrese un número para y: ");
    scanf("%d",&y);

    if (x > y ) {
        printf("El número mayor es: %d \n",x);
    }
    else if ( x == y) {
        printf("Ambos números tienen el mismo valor x: %d, y: %d  \n",x,y);
    }
    else {
        printf("El número mayor es: %d \n",y);
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
