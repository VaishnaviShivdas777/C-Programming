// To Print Given Number is Even Or Odd - Using if - else:- //GNU GCC Compiler

#include<stdio.h>
#include<conio.h>


int main()
{
        int Num = 0;

        printf(" \n enter An Integer Number= ");
        scanf("%d",&Num);

        if(Num == 0)
        {
            printf("\n Given Number is Neutral");
        }
        else if(Num%2=0)
        {
            printf("\n Given Number is Even");
        }
        else
        {
            printf("\n Given Number is odd");
        }

        printf("\n\nThanks!!!!");

        getch();
        return 0;
}
