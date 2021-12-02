//To Print Given Number is Even Or Odd - Using Ternary within Ternary:- //GNU GCC Compiler...


#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;

    printf(" \n enter An Integer Number to check whether it is Even or Odd = ");

    UP:

    scanf("%d",&Num);

    (Num==0)?printf("\n Given Number is Neutral"):(Num%2==0)? printf("\n Given Number is Even"):printf("\n Given Number is odd");

    printf("\n\nThanks!!!!");

    getch();
    return 0;
}
