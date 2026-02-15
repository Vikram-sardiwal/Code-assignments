#include <stdio.h>
int main()
{
    float area, length, width;
    printf("enter the value of length =");
    scanf("%f", &length);
    printf("enter the value of width=");
    scanf("%f", &width);
    area = length * width;
    printf("area %.2f", area);

    return 0;
}