#include <stdio.h>
int main()
{

    int a;
    a = 10;
    int *b;
    b = &a;

    printf("%p", b);
    printf("%d", *b);
    return 0;
}