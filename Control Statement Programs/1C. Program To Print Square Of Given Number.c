// 1C.Program To Print Square Of Given Number.c //GNU GCC Compiler


#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0, Cube = 0;

    printf("\n Enter Number = ");
    scanf("%d", &No);

    Cube = No * No * No;

    printf("\n Cube Of %d = %d.", No, Cube );

    printf("\n\n Thanks");

    getch();
    return 0;
}
