#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("enter the value of a - ");
    scanf("%d", &a);

    printf("enter the value of b - ");
    scanf("%d", &b);

    printf("enter the value of c - ");
    scanf("%d", &c);

    if (a > b && a>c) 
    {
        printf("A is greater");
    }
    else if (b > a && b>c)
    {
        printf("B is greater");
    }
    else if (c > a && c > b)
    {
        printf("C is greater");
    }
}