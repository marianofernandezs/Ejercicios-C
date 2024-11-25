// Enunciado: Verificar palíndromo: Comprueba si una palabra ingresada es igual al revés.

#include <ctype.h>
#include <stdio.h>

int main(){
    char x;
    char y;
    char z;

    printf("Ingrese su palabra de maximo 3 letras \n");
    printf("Ingrese la primera letra: ");
    scanf(" %c",&x);

    printf("Ingrese la segunda letra: ");
    scanf(" %c",&y);


    printf("Ingrese la tercera letra: ");
    scanf(" %c",&z);

    x = tolower(x);
    y = tolower(y);
    z = tolower(z);

    if ( x == z) {
        printf("La palabra es un palindromo \n");
    }
    else {
        printf("La palabra no es un palindromo \n");
    }

    return 0;
}
