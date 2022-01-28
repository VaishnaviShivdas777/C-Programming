#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Std
{
    int R_No;
    char Name[20];
    float Per;

};
void Accept_Stud_Details()
{
    int i = 0;

    for(i = 0; i < 3; i++)
    {
        printf("\n Enter Your Roll No = ");
        scanf("%d",&Std[i].R_No);

        printf("\n Enter Your Name = ");
        scanf("%s",&Std[i].Name);

        printf("\n Enter Your Previous Year Percentage = ");
        scanf("%f",&Std[i].Per);
    }
}
void Display_Stud_Details()
{
    int i = 0;
    printf("\n\n Student Details are => ");

    printf("===============================================================================\n");

    for(i = 0; i < 3; i++)
    {
        printf("\n Roll Number : %d. \n Name : %s. \n Percentage : %0.2f.",Std[i].R_No, Std[i].Name, Std[i].Per);
    }

    printf("\n============================================================================\n");


    Accept_Stud_Details();

    printf("\n Thanks....");
    getch();
    system("cls");

    Display_stud_Details();

    getch();
    return 0;
}
