#include <stdio.h>

struct Address
{
    int pinno;
    char state[20];
};

struct employe
{
    int employe;
    char name[20];
    char dept[20];
    char designation[20];
    int salary;
    char city[20];

    float basic;
    float TA;
    float DA;
    float HRA;
    float PF;
    float NP;

    struct Address A1;
};

int main()
{
    struct employe e1[5];
    int i;

    for (i = 0; i < 1; i++)
    {
        printf("Enter the name : ");
        scanf("%s", e1[i].name);

        printf("Enter the dept name : ");
        scanf("%s", e1[i].dept);

        printf("Enter the designation : ");
        scanf("%s", e1[i].designation);

        printf("Enter the salary : ");
        scanf("%d", &e1[i].salary);

        printf("Enter the city : ");
        scanf("%s", e1[i].city);

        printf("Enter the pin number : ");
        scanf("%d", &e1[i].A1.pinno);

        printf("Enter the state : ");
        scanf("%s", e1[i].A1.state);

        e1[i].basic = e1[i].salary;

        e1[i].TA = e1[i].basic * 0.02;
        e1[i].DA = e1[i].basic * 0.03;
        e1[i].HRA = e1[i].basic * 0.04;
        e1[i].PF = e1[i].basic * 0.03;

        e1[i].NP = e1[i].basic + e1[i].TA + e1[i].DA + e1[i].HRA - e1[i].PF;

        printf("\n");
    }

    printf("All entered information:\n\n");

    for (i = 0; i < 1; i++)
    {
        printf("Name: %s\n", e1[i].name);
        printf("Dept: %s\n", e1[i].dept);
        printf("Designation: %s\n", e1[i].designation);
        printf("Salary: %d\n", e1[i].salary);
        printf("City: %s\n", e1[i].city);
        printf("Pin: %d\n", e1[i].A1.pinno);
        printf("State: %s\n", e1[i].A1.state);

        printf("TA: %.2f\n", e1[i].TA);
        printf("DA: %.2f\n", e1[i].DA);
        printf("HRA: %.2f\n", e1[i].HRA);
        printf("PF: %.2f\n", e1[i].PF);
        printf("Net Pay: %.2f\n", e1[i].NP);
    }

    return 0;
}
