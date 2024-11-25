// Enunciado: Calcular bono salarial: Calcula el bono según el rango de salario (por ejemplo, 5% si es < $2000, 10% si está entre $2000-$5000).

#include <stdio.h>

int main(){
    int mySalario;
    int myBono;
    printf("Porfavor ingrese su salario para ver cuanto bono podria obtener\n");
    printf("Ingrese su salario: ");
    scanf("%d",&mySalario);

    if (mySalario > 0) {
        printf("Es posible calcular su bono \n");
        if (mySalario < 2000 ) {
            myBono = mySalario * 0.05;
            mySalario = myBono + mySalario;
            printf("Mi bono salarial es de %d y mi salario final es : %d \n",myBono,mySalario);
        }
        else if (mySalario >= 2000 && mySalario <= 5000) {
            myBono = mySalario * 0.1;
            mySalario = myBono + mySalario;
            printf("Mi bono salarial es de %d y mi salario final es : %d \n",myBono,mySalario);
        }
        else {
            myBono = mySalario * 0.2;
            mySalario = myBono + mySalario;
            printf("Mi bono salarial es de %d y mi salario final es : %d \n",myBono,mySalario);
        }
    }
    else {
        printf("Su salario debe ser mayor a 0 \n");
    }
    printf("Gracias por visitar el programa, hasta la proxima ;) \n");

    return 0;
}
