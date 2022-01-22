//Structure Declaration Objects Creation.c

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    struct stud
    {
        int Roll_No;
        char Name[60];
        long long int Mob_No;
        float Per;
    };

    struct stud std1,std2,std3;

    printf("\n enter 1st Student Details => ");

    printf("\n Enter Student Roll No= ");
    scanf("%d", &std1.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name= ");

    gets(std1.Name);

    printf("\n Enter Student Mobile No= ");
    scanf("%lld", &std1.Mob_No);

    printf("\n enter student Percentage= ");
    scanf("%f", &std1.Per);

    printf("\n enter 2nd Student Details => ");

    printf("\n Enter Student Roll No= ");
    scanf("%d", &std2.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name= ");

    gets(std2.Name);

    printf("\n Enter Student Mobile No= ");
    scanf("%lld", &std2.Mob_No);

    printf("\n enter student Percentage= ");
    scanf("%f", &std2.Per);

    getch();
    system("cls");

    printf("\n\n\t\t 1st Student Details are => \n");

    printf("\n student Roll_No    = %d,std1.Roll_No");
    printf("\n student Name       = %s,std1.Name");
    printf("\n student Mobile     = %lld,std1.Mob_No");
    printf("\n student Percentage = %0.2f,std1.Per");

    printf("\n\n\t\t 2nd Student Details are => \n");

    printf("\n student Roll_No    = %d,std2.Roll_No");
    printf("\n student Name       = %s,std2.Name");
    printf("\n student Mobile     = %lld,std2.Mob_No");
    printf("\n student Percentage = %0.2f,std2.Per");

    getch();
    return 0;

}


