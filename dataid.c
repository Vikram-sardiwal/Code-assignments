#include <stdio.h>
int main()
{
    char ch;
    printf("enter the value of ch=");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'z')
    {
        printf(" ch= %c  Capital", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("ch = %c  small",ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("ch = %c digit",ch);
    }
    else
    {
        printf(" %c is special symbal",ch);
    }

    return 0;
}