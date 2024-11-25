// Enunciado: Control de tráfico: Verifica si un vehículo puede pasar según el semáforo (Rojo, Amarillo, Verde).

#include <ctype.h>
#include <stdio.h>

 int main(){
     char colorSemaf;
     printf("Ingrese el color de su semaforo : ");
     scanf(" %c",&colorSemaf);

     colorSemaf = toupper(colorSemaf);

     if (colorSemaf == 'R'|| colorSemaf == 'V' || colorSemaf == 'A' ) {
         printf("Color de semaforo ingresado es valido \n");
         if (colorSemaf == 'R') {
             printf("Alto, no puedes pasar, porfavor esperar a luz verde para poder pasar \n");
         }
         else if (colorSemaf == 'V') {
             printf("Puedes pasar, tienes permiso de seguir avanzando \n");
         }
         else {
             printf("Puedes pasar pero con precaucion, tienes permiso de seguir avanzando \n");
         }
     }
     else {
         printf("Color de semaforo ingresado es invalido \n");
     }


     return 0;
 }
