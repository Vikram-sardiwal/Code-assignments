#include <stdio.h>

struct contact
{
    int contact;
    char firstname[20];
    char lastname[20];
    char city[10];
    char state[15];
    long int mobile;
};

void add()
{
    struct contact e1;
    printf("Enter the contact :");
    scanf("%d", &e1.contact);
    printf("ENter the firstname :");
    scanf("%s", &e1.firstname);
    printf("Enter the lastname :");
    scanf("%s", &e1.lastname);
    printf("Enter the city :");
    scanf("%s", &e1.city);
    printf("Enter the state :");
    scanf("%s", &e1.state);
    printf("Enter the mobile :");
    scanf("%ld", &e1.mobile);

    FILE *f1;
    f1 = fopen("contact.txt", "a");
    fwrite(&e1, sizeof(e1), 1, f1);
    printf("record written");
    fclose(f1);
}

void display()
{
    struct contact e1;
    FILE *f1;
    f1 = fopen("contact.txt", "r");
    while (fread(&e1, sizeof(e1), 1, f1) == 1)
    {

        printf("%d\n", e1.contact);
        printf("%s\n", e1.firstname);
        printf("%s\n", e1.lastname);
        printf("%s\n", e1.city);
        printf("%s\n", e1.state);
        printf("%ld\n", e1.mobile);
        printf("\n");
    }
    fclose(f1);
}

void search()
{
    int e;
    FILE *f1;
    struct contact e1;
    f1 = fopen("contact.txt", "r");
    printf("enter contact id :");
    scanf("%d", &e);

    while (fread(&e1, sizeof(e1), 1, f1) == 1)
    {
        if (e1.contact == e)
        {
            printf("%d", e1.contact);
            printf("%s", e1.firstname);
            printf("%s", e1.lastname);
            printf("%s", e1.city);
            printf("%s", e1.state);
            printf("%ld", e1.mobile);
        }
    }
    fclose(f1);
}

void update()
{

    int e, flag;
    FILE *f1;
    struct contact e1;
    f1 = fopen("contact.txt", "r+");
    printf("which record want to you update :");
    scanf("%d", &e);
    while (fread(&e1, sizeof(e1), 1, f1) == 1)
    {
        if (e1.contact == e)
        {
            printf("Enter the contact :");
            scanf("%d", &e1.contact);
            printf("ENter the firstname :");
            scanf("%s", &e1.firstname);
            printf("Enter the lastname :");
            scanf("%s", &e1.lastname);
            printf("Enter the city :");
            scanf("%s", &e1.city);
            printf("Enter the state :");
            scanf("%s", &e1.state);
            printf("Enter the mobile :");
            scanf("%ld", &e1.mobile);

            fseek(f1, -sizeof(e1), SEEK_CUR);
            fwrite(&e1, sizeof(e1), 1, f1);
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
    fclose(f1);
}

void delete1()
{

    int e, flag = 1;
    struct contact e1;
    FILE *f1, *f2;
    f1 = fopen("contact.txt", "r");
    f2 = fopen("temp.txt", "a");
    printf("which record you want to delete :");
    scanf("%d", &e);
    while (fread(&e1, sizeof(e1), 1, f1) == 1)
    {
        if (e1.contact!= e)
        {
       fwrite(&e1,sizeof(e1),1,f2);
        }
        if (e1.contact == e)
        {
           flag=1;
        }

    }
    fclose(f1);
    fclose(f2);
    
    if (flag==1)
    {
        remove("contact.txt");
        rename("temp.txt", "contact.txt");
        printf("record was delete.");
    }
          else
    {
         printf("record not found");
        remove("temp.txt");    }
  
    
    
}
int main()
{
    int choice, ch;
    do
    {

        printf("Enter the contact \n");
        printf("1. Add a contact :\n");
        printf("2. Display all contact : \n");
        printf("3. Search all contact :\n");
        printf("4. Update all contact :\n");
        printf("5. Delete all contact :\n");
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
            delete1();
            break;
        default:
            break;
        }

        printf("\n");
        printf("Do you want continue :");
        scanf("%s", &ch);
    }

    while (ch == 'Y' || ch == 'y');
}