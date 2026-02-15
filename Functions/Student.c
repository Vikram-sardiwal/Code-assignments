#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    int marks[3];
};

int main()

{

    struct Student s1[5];
    int i;
    for (i = 0; i < 1; i++)
    {
        printf("Enter the rollno :");
        scanf("%d", &s1[i].rollno);
        printf("Enter the name :");
        scanf("%s", &s1[i].name);
        printf("Enter the marks :");
        printf("Enter 3 marks :");

        int j;
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &s1[i].marks[j]);
        }
        printf("\n");
    }

    printf("All entered information:\n\n");

    for (i = 0; i < 1; i++)
    {
        printf("rollno %d\n", s1[i].rollno);
        printf("name %s\n", s1[i].name);

        int j;
        for (j = 0; j < 3; j++)
        {
            printf(" %d :%d\n", j + 1, s1[i].marks[j]);
        }
    }

    return 0;
}