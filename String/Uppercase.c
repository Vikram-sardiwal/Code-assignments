#include <stdio.h>
int main()
{
    char name[20];
    int i;
    printf("Enter the name :");
    scanf("%s", &name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
    printf(" UpperCase name :%s", name);

    return 0;
}