#include <stdio.h>
int main(){
int costid,unit,bill,price;
printf("enter the value of costid=");
scanf("%d",&costid);
printf("enter the value of unit =");
scanf("%d",&unit);
printf("enter the value of price");
scanf("%d",&price);

// bill = unit*price;
printf("bill %d\n",bill);
if (unit <=199){
    bill = unit*1.20;
    printf("%.2f/n",bill);
}
else if (unit >200 &&  400<unit)
{ bill = unit*1.50;
    printf("%.2f/n",bill);
}
else if (unit >400 && 600<unit)
     {bill = unit*1.80;
    printf("%.2f/n",bill);
     }
else{
     bill = unit*2.00;
     printf("%.2f\n",bill);
     
}
    return 0;

}