//Structure Declaration Object Creation.c               Using GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#include<string.h>

    int main()
    {
        struct stud
        {
            char Name[20];
            int Roll_No;
            long long int Mob;
            float Income;

        };
        struct stud std1;

        std1. Roll_No = 21;
        std1. Mob = 9307712319;
        std1. Income = 5000;
        strcpy(std1.Name,"Vaishu Shivdas");

        printf("\n 1st Student Roll_No = %d", std1.Roll_No);
        printf("\n 1st Student Name = %s", std1.Name);
        printf("\n 1st Student Mobile No = %lld", std1.Mob);
        printf("\n 1st Student Income = %0.2f", std1.Income);
        getch();
        return 0;
    }
