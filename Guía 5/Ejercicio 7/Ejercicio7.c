#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0, b=0, c=0, d=0;
    for (int i = 1; i <= 20; i++)
    {
        printf("Ingrese las unidades vendidas del vendedor numero %d:\n", i);
        for (int k = 1; k <= 15; k++)
        {
            scanf("%d", &a);
            b=b+a;
            if (b>c)
            {
                c=b;
            }
        }
        d=d+b;
        printf("Este vendedor tiene %d unidades vendidas en total.\n", b);
        b=b-b;
    }
    printf("El vendedor con mas unidades vendidas es de %d y el total general es %d", c, d);
    return 0;
}