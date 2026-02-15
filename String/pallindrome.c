#include <stdio.h>
int main()
{
    int i, j, flag = 0, length = 0;
    char name[20], name1[20];
    printf("enter  the name :");
    scanf("%s", &name);
   
    for (i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    j = length - 1;
    for (i = 0;  i <= length/2; i++, j--)
    {
        if (name[i] != name[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("not pallindrome");
    }
    else
    {
        printf("pallindrome");
    }

    return 0;
}