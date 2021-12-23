//Find Minimum and Minimum From 10 Inputted Numbers.c...Using GNU GCC Compiler..

#include<stdio.h>
#include<conio.h>

        int main()
        {
            int No = 0, Min = 0, Max = 0, Cnt = 0;

            printf("\n Enter 10 Numbers => ");

            for(Cnt = 1; Cnt <= 10; Cnt++)
            {

                printf("\n\t Enter No %d= ", Cnt);
                scanf("%d", &No);

                if(Cnt == 1)
                {
                    Min = No;
                    Max = No;
                    continue;

                }

                if(No < Min)
                {
                    Min = No;
                }

                 if(No > Max)
                {
                    Max = No;
                }

           }
                printf("\n Press Any Key To get Minimum from Given No => ");
                getche();

                printf("\n Minimum of Given Number = %d", Min);
                printf("\n Maximum of Given Number = %d", Max);

                printf("\n\n Thanks!!!!");

                getch();
                return 0;
}
