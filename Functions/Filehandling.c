#include <stdio.h>

struct employe
{
    int employeno;
    char name[20];
    int salary;
};

void add()

{
    struct employe e1;

    printf("Enter the employeno :\n");
    scanf("%d", &e1.employeno);
    printf("Enter the name :\n");
    scanf("%s", &e1.name);
    printf("Enter the salary :\n");
    scanf("%d", &e1.salary);
    printf("\n");
    printf("All entered information :");

    FILE *f;
    f = fopen("emp.txt", "a");
    fwrite(&e1, sizeof(e1), 1, f);
    printf("record written");
    fclose(f);
}

void display()
{

    struct employe e1;
    FILE *f;
    f = fopen("emp.txt", "r");
    while (fread(&e1, sizeof(e1), 1, f) == 1)
    {
        printf("%d", e1.employeno);
        printf("%s", e1.name);
        printf("%d", e1.salary);
        printf("\n");
    }
    fclose(f);
}

void search()
{
    int e;
    FILE *f;
    struct employe e1;
    f = fopen("emp.txt", "r");
    printf("enter employe id :");
    scanf("%d", &e);

    while (fread(&e1, sizeof(e1), 1, f) == 1)
    {
        if (e1.employeno == e)
        {
            printf("%d", e1.employeno);
            printf("%s", e1.name);
            printf("%d", e1.salary);
        }
    }
    fclose(f);
}

void update()
{
    int e, flag;
    FILE *f;
    struct employe e1;
    f = fopen("emp.txt", "r+");
    printf("which record want to you update :");
    scanf("%d", &e);

    while (fread(&e1, sizeof(e1), 1, f) == 1)
    {
        if (e1.employeno == e)
        {
            printf("Enter your employeno :");
            scanf("%d", &e1.employeno);
            printf("Enter your new Name : ");
            scanf("%s", e1.name);
            printf("Enter your sallery :");
            scanf("%d", &e1.salary);

            fseek(f, -sizeof(e1), SEEK_CUR);
            fwrite(&e1, sizeof(e1), 1, f);
            printf("record updated\n");
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Record updated");
    }
    else
    {
        printf("Record not found");
    }
    fclose(f);
}

void delete()
{
    int e, flag = 0;
    struct employe e1;
    FILE *f, *f1;
    f = fopen("emp.txt", "r");
    f1 = fopen("temp.txt", "a");
    printf("Which record you want delete :");
    scanf("%d", &e);
    while (fread(&e1, sizeof(e1), 1, f) == 1)
    {
        if (e1.employeno != e)
        {
            fwrite(&e1, sizeof(e1), 1, f1);
        }
        if (e1.employeno == e)
        {
            flag = 1;
        }
    }
    fclose(f);
    fclose(f1);

    if (flag == 1)
    {
        remove("emp.txt");
        rename("temp.txt", "emp.txt");
    }
    else
    {
        printf("record not found");
        remove("temp.txt");
    }
}

int main()
{
    int choice, ch;
    do
    {
        printf("Welcome to employe Name :\n");
        printf("1. Add a record : \n");
        printf("2. Display all record :\n");
        printf("3. Search all record : \n");
        printf("4. Update all record : \n");
        printf("5. Delete all record : \n");
        printf("Enter your choice : \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;

        case 3:
            search();
            break;

        case 4:
            update();
            break;

        case 5:
            delete();
            break;

        default:
            break;
        }
        printf("\n");
        printf("DO you want continue : ");
        scanf("%s", &ch);

    }

    while (ch == 'Yes' || ch == 'yes');
}