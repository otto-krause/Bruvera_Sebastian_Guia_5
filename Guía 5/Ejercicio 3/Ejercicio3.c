#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0, b=0;
    printf("Ingrese el numero inicial y el final\n");
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = a; i <= b; i++)
    {
        printf("%d\t", i);
    }
    
    return 0;
}