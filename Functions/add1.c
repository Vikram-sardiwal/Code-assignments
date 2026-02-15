#include <stdio.h>
int sum();
int mul();
int div();
int main()

{
    int s, m, d;
    s = sum(12, 14);
    printf("%d", s);

    m = mul(10, 10);
    printf("%d", m);

    d = div(50, 2);
    printf("%d", d);
}

int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int mul(int a, int b)
{
    int mul;
    mul = a * b;
    return mul;
}

int div(int a, int b)
{
    int div;
    div = a / b;
    return div;
}