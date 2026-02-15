#include <stdio.h>
int main()
{
    int a, b, choice, result;
    do
    {
        printf("welcome to my calculator :");
        printf("\n 1 : ADD \n");
        printf("\n 2 : SUB \n");
        printf("\n 3 :MUL \n");
        printf("\n 4  :DIV \n");
        printf("\n 5  :EXIT \n");
        printf("enter the value of choice=");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("enter the value of a =");
            scanf("%d", &a);
            printf("enter the value of b= ");
            scanf("%d", &b);
        }

        switch (choice)
        {
        case 1:
            result = a + b;
            printf(" ADD =%d\n", result);
            break;
        case 2:
            result = a - b;
            printf(" SUB =%d\n", result);
            break;
        case 3:
            result = a * b;
            printf(" MUL =%d\n", result);
            break;
        case 4:
            if (b != 0)
            {
                result = a / b;
                printf("DIV = %d\n", result);
            }
            else
            {
                printf("Error! Division by zero is not allowed.\n");
            }

            break;
        case 5:
            printf("exit this programe\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    } while (choice != 5);
    return 0;
}
