///Using GNU GCC Compiler.......

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

long int Factorial(int);

int main()
{
    int No = 0;

    Up:
        printf("\n Factorial Number To find Its Factorial : ");
        scanf("%d", &No);

        if(No < 0)
        {
            printf("\n Invalid Input Please Enter +Ve Integer Value.");
            goto UP;
        }
        printf("\n Factorial Of Given Number %d is = %ld.", No, Factorial(No));

        getch();
        return 0;
}

long int Factorial(int Num)
{
    long int Fac = 1;

        while(Num > 1)
        {
            Fac = Fac * Num;
            Num--;

        }

        return Fac;
}
