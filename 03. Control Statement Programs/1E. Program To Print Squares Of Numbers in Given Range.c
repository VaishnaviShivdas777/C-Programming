// 1E.Program To Print Squares Of Numbers in Given Range.c  //GNU GCC Compiler

#include<stdio.h>
#include<conio.h>


int main()
{
        int sNo = 0, eNo = 0;

        printf("\n Enter Start Number = ");
        scanf("%d", &sNo);

        printf("\n Enter End Number = ");
        scanf("%d", &eNo);

        printf("\n================================================================================");

        printf("\n Number Square \n");

        while(sNo <= eNo)
        {
            printf("\n %4d  =  %4d", sNo, (sNo * sNo));
            sNo++;
        }

        printf("\n================================================================================");

        printf("\n\n Thanks!!! ");
        getch();
        return 0;
}
