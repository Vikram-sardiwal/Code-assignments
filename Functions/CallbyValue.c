#include <stdio.h>
int main()
{
    int a = 10;
    int *b;
    b = &a;
    printf("Address of a: %p\n", b);
    printf("Value of a: %d\n", *b);
}
