#include <stdio.h>
#include <stdlib.h>

/*Dise�ar un algoritmo que permita identificar el mayor de dos n�meros ingresados por
teclado, en caso de ser iguales, muestre dicha relaci�n.*/

void numeros();

int main()
{
    int a=0, b=0;
    printf("Ingresa un numero ");
    scanf("%d",&a);
    printf("Ingresa un numero ");
    scanf("%d",&b);
    numeros(a,b);
    return 0;
}
void numeros(int a, int b)
{
    if (a!=b){
        if (a>b)
            printf("%d es mayor que %d",a,b);
        else
            printf("%d es mayor que %d",b,a);
    }
    else
        printf("Los numeros son iguales");
}
