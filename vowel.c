#include <stdio.h>
int main()
{

    char ch;
    printf("enter the value of char =");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
    {
        printf("vowel");
    }
    else
    {
        printf("not vowel");
    }
    return 0;
}