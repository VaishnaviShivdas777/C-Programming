///Using GNU GCC Compiler.......

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stud
{
    int R_No;
    char Name[20];
    float Per;
}std[3];

void Accept_stud_Details()
{

    int i = 0;
    for( i = 0; i < 3; i++ )
    {
        printf("\n Enter Your Roll No = ");
        scanf("%d",&std[i].R_No);

        printf("\n Enter Your Name = ");
        scanf("%s", &std[i].Name);

        printf("\n Enter You Previous Year Percentage = ");
        scanf("%f", &std[i].Per);
    }
}

void Display_stud_Details( )
{
    int i = 0;
    printf("\n\n Student Details Are => ");

    printf("\n ========================================================\n");

    for( i = 0; i < 3; i++)
    {
        printf("\n Roll Number : %d. \n Name : %d. \n Percentage = %0.2f. ",std[i].R_No, std[i].Name, std[i].Per);

    }

    printf("\n ========================================================\n");

}
int main()
{


    Accept_stud_Details();
    printf("\n Thanks....");
    getch();
    sysytem("cls");

    Display_stud_Details();

    getch();
    return 0;
}
