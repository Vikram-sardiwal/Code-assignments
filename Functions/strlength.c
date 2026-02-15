#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    int length;

    printf("Enter the name: ");
    scanf("%s", name);

    length = strlen(name);

    printf("You entered: %s\n", name);
    printf("Length = %d\n", length);

    return 0;
}
