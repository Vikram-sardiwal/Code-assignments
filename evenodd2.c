#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of a =");
    scanf("%d", &a);
    if (a > 0)
    
    {
        printf("postive number\n", a);
        if (a % 2 == 0)
        {
            printf(" %d even number", a);
        }
        else
        {
            printf("odd");
        }
    }
    else
    {
        printf("%d negative number",a);
    }

    return 0;
}