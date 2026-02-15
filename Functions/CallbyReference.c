#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;   // value of x
    *x = *y;     // put y in x
    *y = temp;   // put temp in y
}

int main() {
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);   // passing address (call by reference)

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
