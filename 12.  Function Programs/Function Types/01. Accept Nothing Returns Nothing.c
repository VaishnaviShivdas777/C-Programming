/*
    1st type of function => Accept Nothing Returns Nothing

    Syntax => void <FunctionName>(void);
    Example => void Add (void);

 */

#include<stdio.h>
#include<conio.h>
void Add(void);                  ///Function Declaration

int main()
{
    Add();                                ///Function Call
    getch();
    return 0;
}

void Add()                                  ///Function Defination
{
    int No1 = 0, No2 = 0, Sum = 0;

    printf("\n Enter 2 Numbers For Addition => ");
    scanf("%d%d", &No1, &No2);

    Sum = No1 + No2;

    printf("\n Addition of %d + %d = %d.", No1, No2, Sum);

    return;
}
