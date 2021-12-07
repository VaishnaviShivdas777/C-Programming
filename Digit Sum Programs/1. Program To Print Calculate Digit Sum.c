// 1. Program To Print Calculate Digit Sum.c..//GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0, Dig = 0, dsum= 0, Temp = 0;

    printf("Enter Positive Integer Number To Calculate It's Digits Sum: ");
    scanf("%d", &No);

    if(No < 0)
    {
        printf("Invalid Number");
    }

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp%10;
        dsum = dsum + Dig;
        Temp = Temp / 10;
    }

    printf("\n Sum Of Digits In Given No %d is = %d", No, dsum);

    getch();
    return 0;
}
