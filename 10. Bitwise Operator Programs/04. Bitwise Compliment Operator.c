// Bitwise Compliment Operator.c

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("Enter Two Numbers = ");
    scanf("%d",&No);

    Res = -No;

    printf("\n Output Of Bitwise Complement is =>%d = %d", No, Res);

    getch();
    return 0;
}
