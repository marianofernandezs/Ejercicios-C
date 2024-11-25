// Enunciado: Simulador de tienda: Pide el tipo de producto y aplica un descuento según el tipo (ejemplo: ropa 10%, alimentos 5%).

#include <ctype.h>
#include <stdio.h>

int main(){
    char myType;
    float price;
    float total;
    printf("Ingrese el tipo de producto: ");
    scanf(" %c",&myType);

    myType = tolower(myType);

    if (myType == 'r' || myType == 'a' || myType == 'e') {
        printf("Tipo de producto ingresado, es valido \n");
        printf("Ingrese el precio del producto: ");
        scanf("%f",&price);

        if (price > 0 ) {
            printf("Precio valido \n");



        if (myType == 'r') {
            total = price * 0.10;
            total = price - total;
            printf("El descuento aplicado es de 10 porciento y el valor total del producto es: %.2f \n",total);
        }
        else if (myType == 'a') {
            total = price * 0.05;
            total = price - total;
            printf("El descuento aplicado es de 5 porciento y el valor total del producto es: %.2f \n",total);
        }
        else {
            total = price * 0.15;
            total = price - total;
            printf("El descuento aplicado es de 15 porciento y el valor total del producto es: %.2f \n",total);
        }
    }else {
        printf("Precio Invalido \n");
    }
    }
    else {
        printf("Tipo de producto ingresado invalido, intente de nuevo \n");
    }

     printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
