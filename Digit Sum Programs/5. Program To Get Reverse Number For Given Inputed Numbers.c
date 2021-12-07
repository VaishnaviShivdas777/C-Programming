// 5.Program To Get Reverse Number For Given Inputed Numbers.c...Using GNU GCC Compiler...


#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0, Temp = 0, RevNum = 0;

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
        RevNum = (RevNum * 10) + (Temp % 10);
        Temp /= 10;
    }
    printf("\n Reverse Of  Given No %d Is = %d ", No, RevNum);

    getch();
    return 0;
}

