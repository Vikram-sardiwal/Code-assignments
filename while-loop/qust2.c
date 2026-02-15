#include <stdio.h>
int main()
{
    int a, b, r, p = 0;
    printf("enter the value of a =");
    scanf("%d", &a);
    b = a;

    while (a>= 1)
    {
        r = a % 10;
        p = p * 10 + r;
        a = a / 10;
    }
    if(p==b){
        printf("palindrome !");
    }
    else{
        printf("not palindrome !");
    }
    return 0;
}