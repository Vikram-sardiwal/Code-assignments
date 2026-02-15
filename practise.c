// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {

//         printf("*  ");
//     }
//     printf("\n");
//     for (i = 1; i <= 3; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             printf("  ");
//         }
//         printf("\n");
//     }
//     for (i = 1; i <= 5; i++)
//     {
//         printf("*  ");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 5; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j,k=0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
           k =k+1;
printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}