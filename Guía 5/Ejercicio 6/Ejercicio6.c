#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0, b=0, c=0, d=0, e=0;
    for (int i = 1; i <= 30; i++)
    {
        printf("Ingrese las notas del alumno numero %d:\n", i);
        for (int k = 1; k <= 10; k++)
        {
            scanf("%lf", &a);
            b=b+a;
        }
        c= (double) b/10;
        d=d+c;
    }
    e= (double) d/30;
    printf("El promedio general del curso es de %g", e);
    return 0;
}