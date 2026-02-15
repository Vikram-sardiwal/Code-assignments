#include <Stdio.h>
int main()
{
    int i, n, flag = 0;
    printf("enter the value of a =");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("not prime");
    }
    else
    {
        printf("prime");
    }
}
