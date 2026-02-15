#include <stdio.h>
int main()
{
    int ch;
    do
    {
        printf("\n  Enter your Country Capital  & Currency \n");
        printf("\n India : [1]  \n");
        printf("\n Usa : [2] \n");
        printf(" \n Uae : [3] \n");
        printf("\n Exit : [4] \n");
        printf("Enter your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Capital : New Delhi | Currency : Rupees.\n");
            break;
        case 2:
            printf("\n Captital : Washington       | Currency : Dollar.    \n");
            break;
        case 3:
            printf("\n Captial :  Abu Dhabi   | Currency : Dirham.    \n");
            break;
        case 4:
            printf(" thx for using this program      \n");
            break;

        default:
            printf("invalid sorrry!");
            break;
        }
    }
        while (ch != 4);
        return 0;
            
  }
    