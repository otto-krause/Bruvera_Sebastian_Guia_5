#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0;
    int b=0, c=0, d=0;
    printf("Ingrese el sueldo de 20 trabajadores:\n");
    for (int i = 1; i <= 20; i++)
    {
        scanf("%lf", &a);
        if (a<2000)
        {
            b=b+1+(a-a);
        }
        else
        {
            if (a>2000)
            {
                c=c+1+(a-a);
            }
            else
            {
                d=d+1+(a-a);
            }   
        }
    }
    printf("%d personas ganan menos de $2000 y %d ganan mas de $2000\n", b, c);
    return 0;
}