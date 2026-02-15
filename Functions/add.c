#include <stdio.h>
// void sum();
// void minus();
// void multi();
void div();

int main()
{
    // sum();
    // minus();
    // multi();
    div();
    return 0;
}
void sum()
{
    int a, b, c;
    printf("enter the value of a =");
    scanf("%d", &a);
    printf("enter the value of b =");
    scanf("%d", &b);
    c = a + b;
    printf(" c =%d", c);

}
void minus(){
    int a, b, c;
    printf("enter the value of a =");
    scanf("%d", &a);
    printf("enter the value of b =");
    scanf("%d", &b);
    c = a-b;
    printf(" c =%d", c);

}
void multi(){
       int a, b, c;
    printf("enter the value of a =");
    scanf("%d", &a);
    printf("enter the value of b =");
    scanf("%d", &b);
    c = a*b;
    printf(" c =%d", c);
}

void div(){
    int a,b,c;
    printf("enter the value of a =");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    c = a/b;
    printf(" c =%d", c);
}