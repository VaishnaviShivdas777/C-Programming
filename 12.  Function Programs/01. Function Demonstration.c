///Function Demonstration....      Using  GNU GCC Compiler...


#include<stdio.h>
#include<conio.h>

void Addition()
{
    int Num1 = 0, Num2 = 0, Sum = 0;

    printf("\n======================*****************====================\n");

    printf("\n Enter 2 Numbers for Addition = ");
    scanf("%d%d", &Num1, &Num2);

    Sum = Num1 + Num2;

    printf("\n======================*****************====================\n");

    printf("\n Addition is = %d\". \n", Sum);

    printf("\n======================*****************====================\n");

}

int main()
{
    Addition();

    getch();
    return 0;
}
