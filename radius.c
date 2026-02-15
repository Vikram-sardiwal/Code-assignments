#include <stdio.h>
int main()
{
    int r;
    float area;
    printf("enter the radius of circle =");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("%.2f", area);
    return 0;
}