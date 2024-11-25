// Enunciado: Identificar triángulo: Lee tres lados y verifica si forman un triángulo equilátero, isósceles o escaleno.

#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    printf("Porfavor ingrese valores para poder identificar si estos valores pueden formar un triángulo\n");
    printf("Ingrese un valor para x: ");
    scanf("%d",&x);
    printf("Ingrese un valor para y: ");
    scanf("%d",&y);
    printf("Ingrese un valor para z: ");
    scanf("%d",&z);

    if (x+y > z && x+z > y && y+z > x) {
        printf("Es posible formar un triangulo debido a la desigualdad triangular \n");
        if (x == y && y == z) {
            printf("El triángulo es equilátero \n");
        }
        else if ( x != y && y != z && x != z) {
            printf("El triángulo escaleno \n");
        }
        else {
            printf("El triángulo isósceles \n");
        }

    }
    else {
        printf("No es posible formar un triangulo debido a la desigualdad triangular \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
