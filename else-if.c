#include <stdio.h>

int main()
{

    int a, b, c;
    printf("enetr the value of a =");
    scanf("%d", &a);
    printf("enter the value of b= ");
    scanf("%d", &b);
    printf("enter the value of c =");
    scanf("%d", &c);

    if (a > b && b > c)
    {
        printf("a is greatest number");
    }
    else if (b > a && b > c)
    {
        printf("b is greatest number ");
    }
    else
    {
        printf("c is greatest number");
    }
}
