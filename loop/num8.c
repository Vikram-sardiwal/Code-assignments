#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 2; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 10; j++)
//         {
//             printf("#\t");
//         }
//         printf("\n");
//         }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i, j, k = 1, n;
//     printf("enter the value of n =");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             k++;
//             printf("%d\t", k);
//                 }
//         printf("\n");
//     }
//     return 0;
// }