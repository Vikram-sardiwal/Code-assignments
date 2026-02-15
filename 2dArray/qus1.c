#include <stdio.h>

int main()
{
    int arr[3][3], i, j, sum = 0, row1 = 0, row2 = 0, row3 = 0, col1 = 0, col2 = 0, col3 = 0;

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
    printf("\n even number : ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                printf("%d\t", arr[i][j]);
            }
        }
    }

    printf("\n odd number : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                printf("%d\t", arr[i][j]);
            }
        }
    }

    printf("\n row :");

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

    for (i = 1; i <= 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            row2 = row2 + arr[i][j];
        }
    }

    for (i = 2; i <= 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            row3 = row3 + arr[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <= 0; j++)
        {
            col1 = col1 + arr[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 1; j <= 1; j++)
        {
            col2 = col2 + arr[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 2; j <= 2; j++)
        {
            col3 = col3 + arr[i][j];
        }
    }

    printf("%d\n", sum);
    printf(" sum of row1 :%d\n", row1);
    printf(" sum of row2 :%d\n", row2);
    printf(" sum of row3 :%d\n", row3);
    printf("sum of col1 : %d\n", col1);
    printf("sum of col2 : %d\n", col2);
    printf("sum of col3 : %d\n", col3);

    return 0;
}
