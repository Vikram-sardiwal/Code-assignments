#include <stdio.h>
int main()
{
    int i, flag = 0;
    char name[20], name2[20];
    printf("enter the name :");
    scanf("%s", &name);
    printf("enter the name :");
    scanf("%s", &name2);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] != name2[i])
        {
            flag = 1;
            break;
        }
        if (flag = 1)
        {
            printf("%s", name2);
        }
    }
    printf("%s", name);

    return 0;
}