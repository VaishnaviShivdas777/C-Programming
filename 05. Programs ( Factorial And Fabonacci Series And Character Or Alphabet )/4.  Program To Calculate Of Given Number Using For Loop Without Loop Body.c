// 3.Program To Calculate Factorial Of Given Numbers Using For Loop Without Loop Body.c....//GNU GCC Compiler....


#include<stdio.h>
#include<conio.h>

int main()

{
    int No = 0, Fact = 0, Temp = 0;

    printf("\n Enter Number To Calculate It's Factorial= ");
    scanf("%d",&No);

    for(Fact = 1, Temp = No; Temp > 1; Fact *= Temp, Temp--);

    printf("\n Factorial Of Number %d is = %d",No,Fact);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
