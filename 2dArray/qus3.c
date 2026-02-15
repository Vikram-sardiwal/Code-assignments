#include <stdio.h>
int main()
{
    int arr[3][3], i, j, sum = 0, row1 = 0, row2 = 0;
    printf("Enter the values for a 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter number [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix you entered is:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            row1 = row1 + arr[i][j];
        }
    }

    for (i = 1; i <=1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            row2 = row2 + arr[i][j];
        }
    }

    printf(" sum of matrix = %d\n", sum);
    printf(" sum of row1 : %d\n", row1);
    printf(" sum of row2 : %d\n", row2);

    return 0;
}