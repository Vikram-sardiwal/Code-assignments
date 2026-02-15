#include <stdio.h>
int main()
{
    int arr[5], i, max = 0, max2 = 0, max3 = 0;
    printf("Enter the values of numbers:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Number value [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int data = arr[0];

    for (i = 0; i < 5; i++)
    {
        if (data < arr[i])
        {

            max2 = data;
            data = arr[i];
        }
        else if (data > arr[i] && max2 < arr[i])
        {

            max2 = arr[i];
        }
    }
    printf("greatest number %d\n", data);
    printf("2nd greatest number %d", max2);
    // printf("3nd greatest number %d", max3);

    return 0;
}