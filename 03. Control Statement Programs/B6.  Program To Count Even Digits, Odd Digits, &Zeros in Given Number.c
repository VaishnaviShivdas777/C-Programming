// 10.Program To Count Even Digits, Odd Digits, &Zeros in Given Number.c..//GNU GCC Compiler..

#include<stdio.h>
#include<conio.h>


int main()
{
            int No = 0, Temp = 0, ZCnt = 0, ECnt = 0, OCnt = 0, Dig = 0;

            printf("Enter +ve Integer Number To Count Even, Odd & Zero Digits in it : ");
            scanf("%d", &No);

            Temp = No;

            if(No < 0)
            {

                    printf("Invalid Number"); return -1;
            }

            while(Temp > 0 )
            {
                Dig = Temp %10;

                if(Dig == 0)
                {
                    ZCnt++;
                }
                else if(Dig % 2 == 0)
                {
                    ECnt++;
                }
                else
                {
                    OCnt++;
                }

                Temp = Temp/10;
            }

            printf("\n Count Of Zeros in Given Number %d is = %d.", No, ZCnt);
            printf("\n Count Of Even Digits in Given Number %d is = %d.", No, ECnt);
            printf("\n Count Of Odd Digits in Given Number %d is = %d.", No, OCnt);

            getch();
            return 0;
}
