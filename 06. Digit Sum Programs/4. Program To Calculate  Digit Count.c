// 4.Program To Calculate  Digit Count.c..//GNU GCC Compiler..

#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0, dCnt = 0, dSum = 0, Temp = 0;

    printf("Enter Positive Integer Number To Calculate It's Digits Count: ");
    scanf("%d", &No);

    Temp = No;

    if(No < 0)
    {
            printf("Invalid Number");
            return -1;
    }
    while(Temp>0)
    {
        dCnt ++;
        Temp = Temp / 10;
    }

    printf("\n Digit Of Digits In Given No %d Is = %d ", No,dCnt);

    getch();
    return 0;
}

