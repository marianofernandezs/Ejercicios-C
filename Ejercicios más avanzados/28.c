// Enunciado: Plan de suscripción: Pide al usuario su tipo de suscripción (Básica, Estándar, Premium) y muestra los beneficios correspondientes.

#include <ctype.h>
#include <stdio.h>

 int main(){
     char typeSub;
     printf("Ingrese su suscripción: ");
     scanf(" %c",&typeSub);

     typeSub = toupper(typeSub);

     if (typeSub == 'B'|| typeSub == 'E' || typeSub == 'P' ) {
         printf("La suscripcion ingresada es valida \n");
         if (typeSub == 'B') {
             printf("Tipo de suscripción: Básica \n");
             printf("Beneficios: \n");
             printf("- Acceso limitado a contenido. \n");
             printf("- Resolución estándar (480p). \n");
             printf("- Un dispositivo. \n");
         }
         else if (typeSub == 'E') {
             printf("Tipo de suscripción: Estandar \n");
             printf("Beneficios: \n");
             printf("- Acceso a todo el contenido. \n");
             printf("- Resolución HD (1080p). \n");
             printf("- Dos dispositivos simultáneos. \n");
         }
         else {
             printf("Tipo de suscripción: Premium \n");
             printf("Beneficios: \n");
             printf("- Acceso a todo el contenido. \n");
             printf("- Resolución Ultra HD (4K). \n");
             printf("- Cuatro dispositivos simultáneos. \n");
             printf("- Descargas sin conexión.");
         }
     }
     else {
         printf("La suscripcion no es valida \n");
     }


     return 0;
 }
