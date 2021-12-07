// 2. Program To Print Calculate Digit Sum Using For Loop.c...//GNU GCC Compiler...


#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0, Dig = 0, dSum = 0, Temp = 0;

    printf("Enter Positive Integer Number To Calculate It's Digits Sum: ");
    scanf("%d", &No);

    if(No < 0)
    {
        Temp = -No;
    }

    else
    {
        Temp = No;
    }

    for( ; Temp > 0; Temp /= 10)
    {
        Dig = Temp % 10;

        printf("\n %d+%d =%d",dSum, Dig,(dSum+Dig));

        dSum += Dig;
    }
    printf("\n\n Sum Of Digits In Given No %d is = %d", No, dSum);

    getch();
    return 0;
}
