// Enunciado: Menor de tres números: Lee tres números y determina cuál es el menor.

#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    printf("Ingrese un número para verificar que número es menor entre x, y, z  \n");
    printf("Ingrese un número para x: ");
    scanf("%d",&x);
    printf("Ingrese un número para y: ");
    scanf("%d",&y);
    printf("Ingrese un número para z: ");
    scanf("%d",&z);

    if (x < y && x < z ) {
        printf("El número menor es: %d \n",x);
    }
    else if (y < x && y < z ) {
        printf("El número menor es: %d \n",y);
    }
    else if ( x == y && y == z) {
        printf("Los tres números tienen el mismo valor x: %d, y: %d, z: %d  \n",x,y,z);

    }
    else {
        printf("El número menor es: %d \n",z);
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
