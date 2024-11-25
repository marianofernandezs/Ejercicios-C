// Enunciado: Rango de IMC: Calcula el índice de masa corporal y clasifica al usuario según su rango.

#include <stdio.h>

int main(){
    float myPeso;
    float myAltura;
    float imc;
    printf("Ingresa tu peso en kg:  ");
    scanf("%f",&myPeso);
    printf("Ingresa tu altura en m:  ");
    scanf("%f",&myAltura);

    if (myPeso > 0 && myAltura > 0) {
        printf("Datos ingresados son validos\n");
        myAltura = myAltura*myAltura;
        imc = myPeso/myAltura;
        if (imc < 18.5) {
            printf("Tu IMC es: %f\n",imc);
            printf("Tu IMC indica que estas en Bajo Peso \n");
        }
        else if (imc >= 18.5 && imc < 24.9) {
            printf("Tu IMC es: %f\n",imc);
             printf("Tu IMC indica que estas en un Peso Normal \n");
        }
        else if (imc >= 25 && imc < 29.9) {
            printf("Tu IMC es: %f\n",imc);
            printf("Tu IMC indica que estas en Sobrepeso \n");
        }
        else {
            printf("Tu IMC es: %f\n",imc);
            printf("Tu IMC indica que estas en Obesidad \n");
        }
    }
    else {
        printf("Datos ingresados no son validos\n");
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");


    return 0;
}
