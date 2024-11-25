// Enunciado: Clasificación por notas: Asigna una calificación de letra según una nota (A, B, C, D, F).

#include <stdio.h>

int main(){
    float myNota;
    printf("Ingrese su nota para ver que calificación obtuvo: ");
    scanf("%f",&myNota);

    if (myNota <= 0) {
        printf("Ingrese una nota valida \n");
    }
    else if (myNota > 0 && myNota <= 2.9) {
        printf("Tu calificación es F y la nota obtenida es %.3f\n",myNota);
    }
    else if (myNota > 2.9 && myNota <= 3.9) {
        printf("Tu calificación es D y la nota obtenida es %.3f\n",myNota);
    }
    else if (myNota > 3.9 && myNota <= 4.9) {
        printf("Tu calificación es C y la nota obtenida es %.3f\n",myNota);
    }
    else if (myNota > 4.9 && myNota <= 5.9) {
        printf("Tu calificación es B y la nota obtenida es %.3f\n",myNota);
    }
    else {
        printf("Tu calificación es A y la nota obtenida es %.3f\n",myNota);
    }

    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
