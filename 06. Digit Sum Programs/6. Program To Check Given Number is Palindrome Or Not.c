// 6.Program To Check Given Number is Palindrome Or Not.c..Using GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, RevNum = 0;

    printf("Enter Positive Integer Number To check Whether it is Palindrome Number : ");
    scanf("%d", &No);

    Temp = No;

    if(No < 0)
    {
            printf("Invalid Number");
            return -1;
    }
    while(Temp > 0)
    {
        RevNum = (RevNum * 10) + (Temp % 10);
        Temp /= 10;
    }
    if(No == RevNum)
    {
        printf("\n As %d == %d,", No, RevNum);
        printf("\n Given Number %d is Palindrome", No);
    }
    else
    {
        printf("\n As %d != %d,", No, RevNum);
        printf("\n Given Number %d is  Not Palindrome", No);
    }

    getch();
    return 0;
}

