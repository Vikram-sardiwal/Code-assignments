#include <stdio.h>
int sum();
int minus();
int main()
{
    int k, j;
    k = sum(10, 20);
    j = minus(k, 10);
    printf("Sum = %d\n", k);
    printf("Minus = %d\n", j);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
int minus(int a, int b)
{
    return a - b;
}