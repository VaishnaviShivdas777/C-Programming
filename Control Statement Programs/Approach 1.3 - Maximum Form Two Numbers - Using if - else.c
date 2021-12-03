//Approach 3: Maximum Form two Numbers-Using if-else:-  //GNU GCC Compiler


#include<stdio.h>
#include<conio.h>


int main()
{
    int Num1 = 0,Num2 = 0;

    printf("\n Enter 2 Integer Number= ");
    scanf("%d%d",&Num1,&Num2);

    if(Num1==Num2)
    {
        printf("\n Both given number are equal");
        goto DWN;

    }
    else if(Num1>Num2)
    {
        printf("\n Number %d is Maximum",Num1);

    }
    else
    {
        printf("\n Number %d is Maximum",Num2);
    }
    DWN:

    printf("\n\nThanks!!!");

    getch();
    return 0;
}
