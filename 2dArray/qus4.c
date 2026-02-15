#include <stdio.h>
int main()
{
    int arr[3][3], i, j, flag = 0;
    printf("enter the value of number\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("number of value [%d] [%d]:", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if ((i == j && arr[i][j] != 1) || (i != j && arr[i][j]) != 0)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf(" not Identity Matrix");
    }
    else
    {
        printf("yes");
    }
    return 0;
}