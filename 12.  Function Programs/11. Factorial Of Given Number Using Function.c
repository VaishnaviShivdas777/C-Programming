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

        printf("\n Factorial Of Given Number %d is = %ld.", No, Factorial(No));

        getch();
        return 0;
}

long int Factorial(int Num)
{
    long int Fac = 1;

    if(Num < 0)
    {
        while(Num < 0)
        {
            Fac = Fac * Num;
            Num++;

        }
    }
    else
    {
        while(Num > 1)
        {
            Fac = Fac * Num;
            Num--;
        }
    }


}

