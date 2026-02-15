#include <stdio.h>
int main()
{
    char name[20], i, c=0;
    printf("Enter the name : ");
    scanf("%s", &name);
    for (i = 0; name[i] != '\0'; i++)
    {
        c++;

        
    }
    printf("%d", c);
    return 0;
}