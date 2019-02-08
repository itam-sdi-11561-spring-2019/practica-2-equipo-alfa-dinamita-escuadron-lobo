#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    bool determinante = b*b > 4*a*c;

    printf("El determinante es positivo: " + determinante);

    return 0;
}
