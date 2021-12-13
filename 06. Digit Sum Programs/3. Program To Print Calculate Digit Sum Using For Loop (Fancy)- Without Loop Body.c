// 3. Program To Print Calculate Digit Sum Using For Loop (Fancy)- Without Loop Body.c..//GNU GCC Compiler..

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, dSum = 0, Temp = 0;

    printf("Enter Positive Integer Number To Calculate It's Digits Sum: ");
    scanf("%d", &No);

    if(No < 0)
    {
        printf(" Invalid Number"); return -1;
    }

    for( Temp = No; Temp > 0; dSum +=(Temp % 10), Temp /= 10)

    printf("\n\n Sum Of Digits In Given No %d is = %d", No, dSum);

    getch();
    return 0;
}
