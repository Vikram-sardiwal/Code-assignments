#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of number =");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d even number  ", a);
    }
    else
    {
        printf("odd number ");
    }

    return 0;
}