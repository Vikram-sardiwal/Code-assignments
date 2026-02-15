#include <stdio.h>
int main()
{
    int arr[5], i;
    printf("enter the value of number:\n ");
    for (i = 0; i < 5; i++)
    {
        printf("number of value [%d] :", i + 1);
        scanf("%d", &arr[i]);
    }
    int g = arr[0];
    for (i = 0; i < 5; i++)
    {
        arr[i] = arr[i + 1];
        printf("%d\n", arr[i]);
    }
}