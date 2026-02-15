#include <stdio.h>
int main()
{
    int arr[3][3], i, j,even,odd;
    printf("enter the value of number\n: ");
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
    // printf("\n even number : ");

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         if (arr[i][j] % 2 == 0)
    //         {
    //             printf("%d\t", arr[i][j]);
    //         }
    //     }
    // }
    // printf("\n odd number : ");
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         if (arr[i][j] % 2 != 0)
    //         {
    //             printf("%d\t", arr[i][j]);
    //         }
    //     }
    // }
    printf("\n");

    int v=0;
    for (i = 0; i <=2; i++)
    {
        for (j = 0; j <= i; j++)
        {
            v = v + arr[i][j];
        }
     
    }
   printf("%d", v);
    return 0;
}