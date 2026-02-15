#include <stdio.h>
int main()
{
    int arr[5], i, max = 0;
    printf("enter the value of number\n");
    for (i = 0; i < 5; i++)
    {
        printf("enter number [%d] :", i + 1);
        scanf("%d", &arr[i]);
    }

    int data = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (data < arr[i])
        {
            data = arr[i];
        }
    }
    printf("greatest number %d", data);
    return 0;
}