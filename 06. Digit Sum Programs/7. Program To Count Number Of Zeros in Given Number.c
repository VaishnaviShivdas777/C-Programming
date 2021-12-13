// 7.Program To Count Number Of Zeros in Given Number.c..//GNU GCC Compiler..

#include<stdio.h>
#include<conio.h>


int main()
{
            int No = 0, Temp = 0, ZCnt = 0, Dig = 0;

            printf("Enter +ve Integer Number To Count Zeros in it : ");
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
                Temp = Temp/10;
            }

            printf("\n Count Of Zeros in Given Number %d is = %d.", No, ZCnt);

            getch();
            return 0;
}
