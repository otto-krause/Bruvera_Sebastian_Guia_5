#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0, c=1;
    int b=0;
    printf("Ingrese el numero base y su exponente\n");
    scanf("%lf", &a);
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        c= (double) c*a;
    }
    printf("El resultado es %f", c);
    return 0;
}