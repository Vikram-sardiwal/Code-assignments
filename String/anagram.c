#include <stdio.h>
int main()
{
    int i, length = 0, j, count = 0;
    char name[20], name2[20];
    printf("Enter the name :");
    scanf("%s", &name);
    printf("Enter the name : ");
    scanf("%s", &name2);

    for (i = 0; name[i] != '\0'; i++)
    {
        length++;
    }

    for (i = 0; name[i] != '\0'; i++)
    {
        for (j = 0; name[j] != '\0'; j++)
        {

            if (name[i] == name2[j])
            {
                count++;
            }
        }
    }
    if (length == count)
    {
        printf("anagrame");
    }
    else
    {
        printf("not anagrame");
    }
    return 0;
}