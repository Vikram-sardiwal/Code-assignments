#include <stdio.h>
int fact(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }

    else
    {
        return (a * fact(a - 1));
    }
}
int main()
{
    int j = 5;
    printf("Factorial = %d", fact(j));
    return 0;
}