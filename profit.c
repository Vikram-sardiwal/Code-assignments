#include <stdio.h>
int main()
{
    int sp, cp, profit,loss;
    printf("enter the value of sp =");
    scanf("%d", &sp);
    printf("enter the value of cp =");
    scanf("%d", &cp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("profit = %d", profit);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        printf("loss = %d\n", loss);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}