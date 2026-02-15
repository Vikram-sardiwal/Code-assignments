#include <stdio.h>
int ob();
int withdrawal();
int deposit();
int main()
{
    int a = ob();
    printf("opening balance is=%d\n", a);

    int rb = withdrawal(a);
    printf("balance after withdrawl=%d\n", rb);

    int tba = deposit(rb);
    printf("deposite balance %d\n", tba);
}
int ob()
{
    int tb = 10000;
    return tb;
}
int withdrawal(int b)
{
    int wb;
    printf("how much amount you want to withrawl =");
    scanf("%d", &wb);
    if (wb > b)
    {
        printf("insufficent balance");
        return 0;
    }
    else
    {

        return b - wb;
    }
}

int deposit(int c)
{
    int db;
    printf("deposit amount ");
    scanf("%d", &db);
    return  c + db;
}