#include <stdio.h>
int main()
{
    float side, area;
    printf("enter the value of sequare =");
    scanf("%f", &side);
    area = side * side;
    printf("%.2f", area);
    return 0;
}