//2.Program To Print Fibonacci Series Using For Loop.c....//GNU GCC Compiler....


#include<stdio.h>
#include<conio.h>


int main()
{
    int No1 = 1, No2 = 0, No3 = 0, Cnt = 0;

    printf("\n Enter Count For Fibonacci Series = ");
    scanf("%d", &Cnt);

    printf("\n Fibonacci Series Of Given count = ");

    for(No1 = 1; Cnt > 0; Cnt-- )
    {
        printf("\t%d", No3);
        No3 = No1 + No2;
        No1 = No2;
        No2 = No3;
    }
    getch();
    return 0;
}
