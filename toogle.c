#include <stdio.h>
int main()
{
    char ch;
    printf("enter the value of ch=");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        ch += 32;
        printf("ch = %c", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
        printf("ch = %c", ch);
    }
    else
    {
        printf("invalid ch ");
    }
    return 0;
}