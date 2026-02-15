#include <stdio.h>
int main()
{
    int c, java, js, python, html, avg, total;

    printf("enter the value of c=");
    scanf("%d", &c);
    printf("enter the value of js =");
    scanf("%d", &js);
    printf("enter the valueof python =");
    scanf("%d", &python);
    printf("enter the value of html");
    scanf("%d", &html);
    printf("enter the value of java=");
    scanf("%d", &java);
    total = c + java + js + python + html;
    avg = total / 5;
    printf(" total =%d\n", total);
    printf("%d\n",avg);
    if (avg >= 90)
    {
        printf("grade A");
    }
    else if (avg >=80 && avg<90)
    {
        printf("grade B");
        ;
    }
    else if (avg>=70 && avg<80)
    {
        printf("grade C");
    }
    else if (avg>=60 && avg<70)
    {
        printf("grade D");
    }
    else if (avg>=40 &&avg<60)
    {
        printf("grade E");
    }
    else
    {
        printf("fail");
    }

    return 0;
}