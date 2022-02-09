/*
        2nd Type Of function
                                Accept Nothing Returns Something

        Syntax :- Datatype<FunctionName>(void);
        Example :- int Add(void);
*/

#include<stdio.h>
#include<conio.h>
int Add();                                ///Function Declaration

int main()
{
    int Sum = 0;

    Sum = Add();                              ///Function Call

    printf("\n Addtion is = %d.", Sum);

    getch();
    return 0;
}

int Add()                                     ///Function Defination
{
    int No1 = 0, No2 = 0, Sum = 0;

    printf("\n Enter 2 Numbers For Addition => ");
    scanf("%d%d", &No1,&No2);

    Sum = No1 + No2;

    return Sum;
}
