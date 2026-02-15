#include <stdio.h>
int main()
{
    int arr[5], i, j, found = 0;
    printf("enter the numbers\n :");
    for (i = 0; i < 5; i++)
    {
        printf("enter number [%d] :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {

        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d", arr[i]);
                break;
            }
        }
    }
    return 0;
}