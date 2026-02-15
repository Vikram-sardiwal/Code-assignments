#include <stdio.h>
int main()
{
    int a, b, r, p = 0;
    printf("enter the value of a =");
    scanf("%d", &a);
    b = a;
    while (a > 0)
    {
        r = a % 10;
        p += r * r * r;
        a = a / 10;
    }
    if (p == b)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrom number");
    }

    return 0;
}