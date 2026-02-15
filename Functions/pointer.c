// #include <stdio.h>
// int main()
// {

//     int a;
//     a = 10;
//     int *b;
//     b = &a;

//     printf("%p", b);
//     printf("%d", *b);
//     return 0;
// }

// pointer to pointer address to address

// #include <stdio.h>
// int main()
// {

//     int a = 1024;
//     int *b = &a;
//     int **c = &b;

//     printf("%d\n", a);
//     printf("%d\n", *b);
//     printf("%d\n", **c);

//     return 0;
// }

// array

// #include <stdio.h>
// int main()
// {
//     int i;
//     int a[5] = {10, 20, 30, 40, 50};
//     int *b[5];

//     for (i = 0; i < 5; i++)
//     {
//         b[i] = &a[i];
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\t", b[i]);
//         printf("%d\n", *b[i]);
//     }
// }

// structure
// #include <stdio.h>

// struct Address
// {
//     int pinno;
//     char state[20];
// };

// struct employe
// {
//     int employe;
//     char name[20];
//     char dept[20];
//     char designation[20];
//     int salary;
//     char city[20];

//     float basic;
//     float TA;
//     float DA;
//     float HRA;
//     float PF;
//     float NP;

//     struct Address A1;
// };

// int main()
// {
//     struct employe e1[5];
//     struct employe *p = e1;
//     struct employe **p2 = &p;
//     int i;

//     for (i = 0; i < 1; i++)
//     {
//         printf("Enter the name : ");
//         scanf("%s", (*p2 + i)->name);

//         printf("Enter the dept name : ");
//         scanf("%s", (*p2 + i)->dept);

//         printf("Enter the designation : ");
//         scanf("%s", (*p2 + i)->designation);

//         printf("Enter the salary : ");
//         scanf("%d", &(*p2 + i)->salary);

//         printf("Enter the city : ");
//         scanf("%s", (*p2 + i)->city);

//         printf("Enter the pin number : ");
//         scanf("%d", &(*p2 + i)->A1.pinno);

//         printf("Enter the state : ");
//         scanf("%s", (*p2 + i)->A1.state);

//         (*p2 + i)->basic = (*p2 + i)->salary;

//         (*p2 + i)->TA = ((*p2 + i)->basic * 0.02);
//         (*p2 + i)->DA = (*p2 + i)->basic * 0.03;
//         (*p2 + i)->HRA = (*p2 + i)->basic * 0.04;
//         (*p2 + i)->PF = (*p2 + i)->basic * 0.03;

//         (*p2 + i)->NP = (*p2 + i)->basic + (*p2 + i)->TA + (*p2 + i)->DA + (*p2 + i)->HRA - (*p2 + i)->PF;

//         printf("\n");
//     }

//     printf("All entered information:\n\n");

//     for (i = 0; i < 1; i++)
//     {
//         printf("Name: %s\n", (*p2 + i)->name);
//         printf("Dept: %s\n", (*p2 + i)->dept);
//         printf("Designation: %s\n", (*p2 + i)->designation);
//         printf("Salary: %d\n", (*p2 + i)->salary);
//         printf("City: %s\n", (*p2 + i)->city);
//         printf("Pin: %d\n", (*p2 + i)->A1.pinno);
//         printf("State: %s\n", (*p2 + i)->A1.state);

//         printf("TA: %.2f\n", (*p2 + i)->TA);
//         printf("DA: %.2f\n", (*p2 + i)->DA);
//         printf("HRA: %.2f\n", (*p2 + i)->HRA);
//         printf("PF: %.2f\n", (*p2 + i)->PF);
//         printf("Net Pay: %.2f\n", (*p2 + i)->NP);
//     }

//     return 0;
// }
