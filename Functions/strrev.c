#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("Enter the name :");
    scanf("%s", name);

    strrev(name);
    printf("%s",name);

    return 0;
}