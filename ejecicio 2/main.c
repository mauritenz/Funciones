#include <stdio.h>
#include <stdlib.h>
/// -Diseñe una funcion que reciba 3 numeros enteros y muestre el mayor y el menor \n");
int Devuelve_menoryMayor(int,int,int);
int main()
{
    int q,r,x, respuesta;
    printf("Ingrese le primer valor ");
    scanf("%d", &q);
    printf("Ingrese le primer valor ");
    scanf("%d", &r);
    printf("Ingrese le primer valor ");
    scanf("%d", &x);

respuesta = Devuelve_menoryMayor(q,r,x);


    return 0;
}


int Devuelve_menoryMayor (int a, int b, int c)
{

    if(a>b && a>c)
    {
        printf("El numero mayor es %d", a);

    }
    else if(b>a && b>c)
    {
        printf("El numero mayor es %d",b);
    }
    else
    {
        printf("El numero mayor es %d ",c);
    }

    if(a<b && a<c)
    {
        printf("El numero menor es %d", a);

    }
    else if(b<a && b<c)
    {
        printf("El numero menor es %d",b);
    }
    else
    {
        printf("El numero menor es %d ",c);
    }





}
