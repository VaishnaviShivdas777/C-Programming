// Swapping of two Numbers:   // GNU GCC Compiler...


#include<stdio.h>
#include<conio.h>


int main()
{
    int Num1 = 0,Num2 = 0,Temp = 0;

    printf("\n Enter 2 Numbers for swapping= ");
    scanf("%d%d",&Num1,&Num2);


    printf("\n Before Swapping 1st Number=%d",Num1);
    printf("\n Before Swapping 2nd Number=%d",Num2);

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;

    printf("\n After Swapping 1st Number=%d",Num1);
    printf("\n After Swapping 2nd Number=%d",Num2);

    printf("\n\n Thanks");

    getch();
    return 0;
}
