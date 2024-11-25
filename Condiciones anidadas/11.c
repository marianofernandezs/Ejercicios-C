// Enunciado: Categoría de edad: Solicita la edad de una persona y clasifícala en niño (0-12), adolescente (13-17) o adulto (18+).

#include <stdio.h>

int main(){
    int myEdad;
    printf("Ingrese su edad para ver en que rango etario se encuentra: ");
    scanf("%d",&myEdad);

    if (myEdad <= 0) {
        printf("Ingrese una edad valida \n");
    }
    else if (myEdad > 0 && myEdad <= 12) {
        printf("Soy un niño y tengo: %d\n",myEdad);
    }
    else if (myEdad > 12 && myEdad <= 17) {
        printf("Soy un adolescente y tengo: %d\n",myEdad);
    }
    else {
        printf("Soy un adulto y tengo: %d\n",myEdad);
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
