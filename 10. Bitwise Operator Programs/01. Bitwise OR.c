// Bitwise OR.c

#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Res = 0;

    printf("Enter Two Numbers = ");
    scanf("%d%d",&No1, &No2);

    Res = No1 | No2;

    printf("\n Output Of Bitwise Or Between =>%d | %d = %d", No1 , No2, Res);

    getch();
    return 0;
}
