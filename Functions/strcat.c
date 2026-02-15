#include <stdio.h>
#include <string.h>
int main(){
char name1[30];
char  name2[30];

printf("Enter the name1 :");
scanf("%s",&name1);
printf("Enter the name2 :");
scanf("%s",&name2);

strcat(name1,name2);
printf("%s",name1);
    return 0;
}