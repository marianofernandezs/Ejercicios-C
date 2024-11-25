// Enunciado: Juego de decisiones: Simula un juego de texto donde el usuario debe elegir entre diferentes opciones para avanzar.

#include <stdio.h>

int main(){
    int opc;
        printf("Encuentras una cueva y un sendero Qué haces? ");
        scanf("%d",&opc);

        if (opc > 0 && opc <= 2) {
            printf("Opciones validas\n");
            if (opc == 1) {
                printf("Decides entrar a la cueva \n");
                printf("Un oso salvaje te acaba de econtrar \n");
                printf("Que decides hacer? \n");
                printf("1.- Escapar, salir corriendo de la cueva \n");
                printf("2.- Quedarse quieto y mantener la calma \n");
                printf("Ingresa tu opcion: ");
                scanf("%d",&opc);
                if ( opc > 0 && opc <= 2) {
                    if (opc == 1) {
                        printf("Acabas de hacer asesinado por un grupo de humanos \n");
                    }
                    else{
                        printf("El oso te acaba de devorar y mueres \n");
                    }

                }

            }
            else if ( opc == 2) {
                printf("Decides ir por el sendero \n");
                printf("Un grupo de humanos te acaba de econtrar \n");
                printf("Que decides hacer? \n");
                printf("1.- Escapar de ellos y salir corriendo \n");
                printf("2.- Quedarse quieto y mantener la calma y poder hablar con ellos \n");
                printf("Ingresa tu opcion: ");
                scanf("%d",&opc);
                if (opc > 0 && opc <= 2) {
                    if (opc == 1) {
                        printf("Acabas de hacer asesinado por un grupo de humanos \n");
                    }
                    else{
                        printf("El grupo de humanos te asesina para despues comerte \n");
                    }
                }
            }
        }
        else {
            printf("Opciones invalida intente con 1 o 2");
        }
        printf("Gracias por jugar jajajajjaa ");
    return 0;
}
