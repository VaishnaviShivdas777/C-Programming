// 1.Program To Calculate Factorial Of Given Numbers Using While.c....//GNU GCC Compiler....

#include<stdio.h>
#include<conio.h>


int main()

{
    int No = 0, Fact = 1, Temp = 0;

    printf("\n Enter Number 10 Calculate It's Factorial= ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>1)
    {
        Fact=Fact*Temp;
        Temp--;
    }

    printf("\n Factorial Of Number %d is = %d",No,Fact);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
