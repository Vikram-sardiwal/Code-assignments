#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    // int len;
    printf("Enter the name :");
    scanf("%s", &name);
    // len=strlen(name);
    printf("%d", strlen(name));
    return 0;
}