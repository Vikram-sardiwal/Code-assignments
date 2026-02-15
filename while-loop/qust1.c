#include <stdio.h>
int main()
{

    int a, b, p = 0;
    printf("enter the value of a =");
    scanf("%d", &a);

    while (a >= 1)
    {
        b = a % 10;
        p = p * 10 + b;
        a = a / 10;
    }
    printf("the reverse number is=%d\n", p);
    return 0;
}