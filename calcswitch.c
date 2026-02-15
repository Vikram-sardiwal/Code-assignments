#include <stdio.h>
int main()
{
    int a, b, c;
    printf("welcome to my calculations");
    printf("1 - add\n");
    printf("2 - mul\n");
    printf("3 -divid\n");
    printf("4 -modulare\n");
    printf("5- sub\n");
    printf("enter the value of a =");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("enter your choice c= ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        c = a + b;
        printf("Add = %d", c);
        break;
    case 2:
        c = a - b;
        printf("sub = %d", c);
        break;
    case 3:
        c = a * b;
        printf("mul = %d", c);
        break;
    case 4:
        c = a % b;
        printf("Rem = %d", c);
        break;

    default:
        break;
    }
    return 0;
}