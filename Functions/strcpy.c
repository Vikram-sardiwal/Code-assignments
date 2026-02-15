#include <stdio.h>
#include <string.h>
int main()
{

    char name1[20];
    char name2[20];

    printf("Enter the value of name1:");
    scanf("%s", &name1);
  

    strcpy(name2, name1);
    printf("Copied String 1: %s\n", name1);

    printf("Copied String 2: %s\n", name2);

    return 0;
}