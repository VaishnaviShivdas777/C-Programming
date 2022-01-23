// Structure - Accept Details & Display Details Using Loop - With Macro.c

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Count 2

struct stud
{
        int Roll_No;
        char Name[60];
        long long int Mob_No;
        float Per;
};
    int main()
{
    struct stud std[3];
    int i = 0;

    printf("\n Enter Student Details => ");

    for(i = 0; i < Count; i++)
    {

    printf("\n\n Enter Details Of Student For  Roll No %d => \n", i+101);

    printf("\n Enter Student Roll No= \n");
    std[i].Roll_No = i + 101;

    fflush(stdin);

    printf("\n Enter Student Name= ");
    scanf("%[^\n]",&std[i].Name);

    printf("\n Enter Student Mobile No= ");
    scanf("%lld",&std[i].Mob_No);

    printf("\n Enter Student Percentage= ");
    scanf("%f", &std[i].Per);

    }
    getch();
    system("cls");

    printf("\n\n\t\t student details entered Are=> ",i+1);

    for(i = 0; i < 3; i++)
    {
        printf("\n\n %d student Details ");

        printf("\n Student Roll No = %d",std[i].Roll_No);
        printf("\n Student Name = %s",std[i].Name);
        printf("\n Student Mobile Number =%dlld",std[i].Mob_No);
        printf("\n student Percentage =0.2f", std[i].Per);

    }
    getch();
    return 0;
}
