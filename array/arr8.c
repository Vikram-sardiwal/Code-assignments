#include <stdio.h>
int main()
{
    int arr[5], i, j, c, b[5];
    printf("enter the value of number\n ");
    for (i = 0; i < 5; i++)
    {
        printf("number of value [%d] :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        c = 1;
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
                arr[j] = -1;
            }
        }
        b[i] = c;
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] != -1)
        {
            printf("%d\t", arr[i]);
            printf("%d\n", b[i]);
        }
    }

    return 0;
}