//1.Program To Print Fibonacci Series Using While Loop.c....//GNU GCC Compiler....


#include<stdio.h>
#include<conio.h>


int main()
{
    int No1 = 1, No2 = 0, No3 = 0, Cnt = 0;

    printf("\n Enter Count For Fibonacci Series = ");
    scanf("%d", &Cnt);

    printf("\n Fibonacci Series Of Given count = ");

    while(Cnt > 0)
    {
        printf("\t%d", No3);
        No3 = No1 + No2;
        No1 = No2;
        No2 = No3;
        Cnt--;
    }
    getch();
    return 0;
}
