#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of year");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        printf("%d leep year  ", a);
    }
    else
    {
        printf("not  leep year");
    }

    return 0;
}