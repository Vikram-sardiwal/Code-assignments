#include <stdio.h>
#include <string.h>
int main(){

    char name1[20];
    char name2[20];

    printf("Enter the name1:");
    scanf("%s",name1);
      printf("Enter the name2:");
    scanf("%s",name2);

   int data= strcmp(name1,name2);

   if(data ==0){
    printf("Both strings are equal.\n");
   }
else if(data >0){
     printf("name1 is greater.\n");
}
else{
      printf("name2 is greater.\n");
}
  
    return 0;
}