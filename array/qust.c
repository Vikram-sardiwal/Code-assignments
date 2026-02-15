#include <stdio.h>
int main()
{
    int i, a[10], evensum = 0, oddsum = 0, sq = 0, count = 0, cube = 0, count2 = 0, position = 0, position2 = 0;
    printf("enter the values=");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            sq = a[i] * a[i];
            evensum += a[i];
            count = ++count;
            position = i + 1;

            printf("even number = %d\t\t", a[i]);
            printf("index of even no. = %d\t\t", i);
            printf("sq of %d is = %d\t ", a[i], sq);
            printf(" position of  %d is %d\n", a[i], position);
        }
    }

    printf("Sum of even numbers = %d\t\t\t", evensum);
    printf("Total count number %d", count);
    printf("\n\n");

    for (i = 1; i < 5; i++)
    {
        if (a[i] % 2 != 0)
        {
            cube = a[i] * a[i] * a[i];
            oddsum += a[i];
            count2 = ++count2;
            position2 = i + 1;

            printf("odd number%d", a[i]);
            printf("%d\n", i);
            printf("cube of %d is = %d\n ", a[i], cube);
            printf(" position of  %d is %d ", a[i], position2);
        }
    }
    printf("Sum of odd numbers = %d\t\t\t", oddsum);
    printf("Total count number %d", count2);
    printf("\n\n");

    return 0;
}