///Using Functional Approach - Maximum From 2 Numbers - Using if-else   Using GNU GCC Compiler.....

#include<stdio.h>
#include<conio.h>

int Find_Max(int, int);

int main()
{
    int Num1 = 0, Num2 = 0, Max = 0;

    printf("\n Enter 2 Integer Numbers = ");
    scanf("%d%d",&Num1,&Num2);

    Max = Find_Max(Num1, Num2);

    if( Max == -1 )
    {
         printf("\n Both Given Numbers are Equal, \n Please Enter Difference Number to compare,\n");
    }
    else
    {
        printf("\n Maximum Number from given Number is = %d.", Max);
    }

    printf("\n Thanks!!!!");
    getch();
    return 0;
}
int Find_Max(int N1, int N2)
{
    if( N1 == N2 )
    {
        return -1;
    }
    if( N1 > N2 )
    {
        return N1;
    }
    else
    {
        return N2;
    }
}
