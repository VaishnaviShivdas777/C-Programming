// 12. Program To Print Number 1 Raise To Number 2.c..//GNU GCC Compiler..

#include<stdio.h>
#include<conio.h>

int main()
{
        int No1 = 0, No2 = 0, Pow = 1, Temp = 0;

        printf("\n Enter Base = ");
        scanf("%d", &No1);

        printf("\n Enter Exponent = ");
        scanf("%d", &No2);

        Temp = No2;

        while(Temp > 0)
        {
            Pow *= No1;           //Pow Pow * No1;

            Temp--;
        }

        printf("\n Power (%d) ^ %d = %d.", No1, No2, Pow);

        printf("\n\n Thanks!!!");

        getch();
        return 0;
}
