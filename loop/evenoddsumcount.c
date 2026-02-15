#include <stdio.h>
int main()
{
    int i, even_sum = 0, even_count = 0, odd_sum = 0, odd_count = 0;

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            even_sum = even_sum + i;
            even_count++;
            printf("%d\n", i);
        }
    }

    printf("%d sum of even number\n", even_sum);
    printf("%d  count number", even_count);

    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            odd_sum = odd_sum + i;
            odd_count++;
            printf("%d\n", i);
        }
    }

    printf("%d sum of odd number\n", odd_sum);
    printf("%d  count number", odd_count);

    return 0;
}