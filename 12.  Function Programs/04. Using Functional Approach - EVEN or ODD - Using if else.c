/// Using Functional Approach - EVEN or ODD - Using if else          Using GNU GCC Compiler....

#include<stdio.h>
#include<conio.h>

void Check_Even_Odd(int);

int main()
{
    int Num = 0;

    printf("\n enter an Integer Number = ");
    scanf("%d", &Num);

    Check_Even_Odd(Num);

    printf("\n Thanks");

    getch();
    return 0;

}

void Check_Even_Odd(int Num)
{
    if( Num == 0 )
    {
        printf("\n Given Number is Neutral.");
    }
    else if( Num % 2 == 0 )
    {
        printf("\n Given Number is EVEN. ");
    }
    else
    {
        printf("\n Given Number is ODD");
    }
    return;
}
