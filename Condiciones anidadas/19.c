// Enunciado: Comparar dígitos: Pide un número de dos dígitos y verifica si el primero es mayor, menor o igual al segundo.

#include <stdio.h>

int main(){
    int myNum;
    int myFirstNum;
    int mySecondNum;
    printf("Porfavor ingrese un número de dos digitos entre (10-99) \n");
    printf("Ingrese su número: ");
    scanf("%d",&myNum);

    if (myNum>= 10 && myNum <= 99) {
        printf("Es posible comparar los dos dígitos \n");

        myFirstNum = myNum/10;
        mySecondNum = myNum % 10;

        if (myFirstNum > mySecondNum) {
            printf("El dígito mayor es: %d \n",myFirstNum);
        }
        else if (mySecondNum > myFirstNum) {
             printf("El dígito mayor es: %d \n",mySecondNum);
        }
        else {
            printf("Ambos dígito son iguales: 1 dìgito es: %d y 2 dígito es: %d \n",myFirstNum,mySecondNum);
        }
    }
    else {
        printf("Su número es invalido porfavor intente nuevamente \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
