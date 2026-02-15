#include <stdio.h>
int main()
{
    int arr[3][3], i, j, k, c[3][3];
    printf("enter the value of number\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("number [%d] [%d] :", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        c[i][j] = 0;
    }
    return 0;
}