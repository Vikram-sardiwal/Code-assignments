#include <stdio.h>
int main()
{
    int i;
    char name[20];
    printf("Enter the name :");
    scanf("%s", &name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 97)
        {
            name[i] += 32;
        }
    }
    printf(" %s", name);

    return 0;
}