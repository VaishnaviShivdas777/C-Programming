//Structure Size of.c               Using GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#include<string.h>

    int main()
    {
        struct stud
        {
            char City[40];
            char Name[20];
            int Roll_No;
            int Phy;
            int Maths;
            int Chem;
        };

        int Num;
        struct stud std1, std2,std3;

        printf("\n Size Of Integer = %d", sizeof(int));
        printf("\n Size Of Integer Variable = %d", sizeof(Num));
        printf("\n Size Of Studen Structure = %d", sizeof(struct stud));
        printf("\n Size Of Student Structure Object = %d", sizeof(std1));

        getch();
        return 0;
    }
