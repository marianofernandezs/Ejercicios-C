// Enunciado: Descuento por monto: Pide el monto de una compra y aplica un 10% de descuento si supera $1000.

#include <stdio.h>

int main(){
    int myMonto;
    int calcDescto;
    printf("Ingrese el monto de su compra: $ ");
    scanf("%d",&myMonto);

    if ( myMonto > 1000) {
        calcDescto = myMonto * 0.1;
        myMonto = myMonto - calcDescto;
        printf("El descuento aplicado es de: $%d y su monto con descuento aplicado es de: $%d \n",calcDescto,myMonto);
    }
    else {
        printf("El monto ingresado no aplica para descuento\n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
