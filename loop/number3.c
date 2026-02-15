#include <stdio.h>
int main()
{
    int j, i, A, E;
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'A'; j <= 'E'; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}