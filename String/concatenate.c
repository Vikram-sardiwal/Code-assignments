#include <stdio.h>
int main()
{
    int i, j, length = 0, count = 0;
    char name[20], name2[20];
    printf("enter  the name :");
    scanf("%s", &name);
    printf("enter  the name :");
    scanf("%s", &name2);
    for (i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    for (i = 0; name[i] != '\0'; i++)
    {
    }
        for (j = 0; name[j] != '\0'; i++,j++)

        {
            name[i] = name2[j];

        }
    
    name[i] = '\0';
    printf("%s", name);
   

    return 0;
}