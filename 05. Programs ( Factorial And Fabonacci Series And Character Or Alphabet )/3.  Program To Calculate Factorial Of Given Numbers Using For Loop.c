// 2.Program To Calculate Factorial Of Given Numbers Using For Loop.c....//GNU GCC Compiler....


#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0, Fact = 0, Temp = 0;

    printf("\n Enter Number T0 Calculate It's Factorial= ");
    scanf("%d",&No);

    for(Fact = 1, Temp = No; Temp > 0; Temp--)

    {
        Fact*=Temp;
    }

    printf("\n Factorial Of Number %d is = %d", No, Fact);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
