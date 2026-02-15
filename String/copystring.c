#include <stdio.h>
int main()
{

    int i, j;
    char name[50], name2[50], length = 0;
    printf("enter the name :");
    scanf("%s", &name);

    for (i = 0; name[i] != '\0'; i++)
    {
        length++;
        name2[i] = name[i];
    }
    name2[i] = '\0';
    printf("name =%s\n", name);
    printf(" name2 =%s", name2);
    return 0;
}