#include <stdio.h>
int main()
{
    char a;
    printf("enter the value of a =");
    scanf("%c", &a);

    switch (a)
    {
    case 'a':
        printf("vowel!");
        break;
    case 'e':
        printf("vowel!");
        break;
    case 'i':
        printf("vowel!");
        break;
    case 'o':
        printf("vowel!");
        break;
    case 'u':
        printf("vowel!");
        break;
    default:
        printf("invalid");
    }

    return 0;
}