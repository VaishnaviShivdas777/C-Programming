/// Maximum From 2 Numbers Using Pointer.c

#include<stdio.h>
#include<conio.h>

void Find_Max(int*, int*);

int main()
{
    int Num1 = 0, Num2 = 0;

    printf("\n Enter 2 Integer Numbers = ");
    scanf("%d%d", &Num1, &Num2);

    Find_Max(&Num1, &Num2);

    printf("\n Thanks!!!");

    getch();
    return 0;
}
void Find_Max(int *P1, int *P2)
{
    if(*P1 == *P2)
    {
        printf("\n Both Given Numbers are Equal, \n Please Enter Diffrent Numbers To Compare!!!\n");

    }
    else if(*P1 > *P2)
    {
        printf("\n Number %d is Maximum.",*P1);
    }
    else
    {
        printf("\n Number %d is Maximum", *P2);
    }

    return 0;
}
