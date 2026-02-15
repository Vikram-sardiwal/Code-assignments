#include <stdio.h>
int main()
{
int hindi,english,math,total;
float avg;

printf("enter the value of hindi =");
scanf("%d",&hindi);
printf("enter the value of english =");
scanf("%d",&english);
printf("enter the value of math=");
scanf("%d",&math);
total = hindi+english+math;
avg = total/3;
printf("%d\n",total);
printf("%.2f\n",avg);

if(avg>=60){
    printf("pass");
}
else{
    printf("fail");
}
    return 0;
}