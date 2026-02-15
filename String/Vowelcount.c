#include <stdio.h>
int main()
{
    char name[20], i, c = 0;
    printf("enter the name :");
    scanf("%s", &name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}