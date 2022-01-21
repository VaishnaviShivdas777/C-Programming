//Structure Declaration Object Creation.c               Using GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#include<string.h>

    int main()
    {
        struct stud
        {
            char Name[60];
            int Roll_No;
            long long int Mob_No;
            float Per;

        };
        struct stud std1, std2, std3;

        printf("\n Enter 1st student Details => ");

        printf("\n enter Student Roll No ");
        scanf("%d", &std1.Roll_No);

        fflush(stdin);

        printf("\n Enter Student Name= ");
        scanf("%d[^\n]", &std1.Name);

        gets(std1.Name);

        printf("\n Enter Student Mobile Number= ");
        scanf("%dll%d", &std1.Mob_No);

        printf("\n Enter Student Percentage= ");
        scanf("%f", &std1.Per);

        printf("\n Enter 2nd Student Details => ");

        printf("\n enter Student Roll_No");
        scanf("%d", &std2.Roll_No);

        fflush(stdin);

        printf("\n Enter Student Name = ");
        scanf("%[^\n]",&std2.Name);

        printf("Enter Student Mobile Number = ");
        scanf("%lld", &std2.Mob_No);

        printf("\n Enter Student Percentage = ");
        scanf("%f", &std2.Per);

        getch();
        system("cls");

        printf("\n\n\t\t 1st Student Details are => \n ");

        printf("\n Student Roll No = %d", std1.Roll_No);
        printf("\n Student Name = %s", std1.Name);
        printf("\n Student Mobile Number = %lld", std1.Mob_No);
        printf("\n Student Percentage = %0.2f", std1.Per);


        printf("\n\n\t\t 2nd Student Details are => \n ");

        printf("\n Student Roll No = %d", std2.Roll_No);
        printf("\n Student Name = %s", std2.Name);
        printf("\n Student Mobile Number = %lld", std2.Mob_No);
        printf("\n Student Percentage = %0.2f", std2.Per);

        getch();
        return 0;

}




