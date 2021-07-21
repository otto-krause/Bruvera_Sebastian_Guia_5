#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0, b=0, c=0;
    printf("Ingrese 15 numeros:\n");
    for (int i = 0; i < 15; i++)
    {
        scanf("%lf", &b);
        a=a+b;
        if (b>c)
        {
            c=b;
        }
        
    }
    printf("La suma de todos los numeros es %g y el mayor es %g\n", a, b);
    return 0;
}