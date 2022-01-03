// Bitwise Right Shift  Operator.c                  Using GNU GCC Compiler....

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("Enter Two Numbers = ");
    scanf("%d",&No);

    Res = No >> 6;

    printf("\n Output Of Bitwise Right Shift is => \n\n\t\t%d>>6 = %d", No, Res);

    getch();
    return 0;
}
