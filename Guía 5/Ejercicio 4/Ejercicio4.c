#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0, b=1, c=0;
    printf("Ingrese el numero del que quiere sacar su factorial\n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        c=b*i;
        b=c;
    }
    printf("El factorial de %d es %d\n", a, c);
    return 0;
}