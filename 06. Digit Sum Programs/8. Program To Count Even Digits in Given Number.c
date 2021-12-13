// 8.Program To Count Even Digits in Given Number.c..//GNU GCC Compiler..

#include<stdio.h>
#include<conio.h>


int main()
{
            int No = 0, Temp = 0, ECnt = 0, Dig = 0;

            printf("Enter +ve Integer Number To Count Even Digits in it : ");
            scanf("%d", &No);

            Temp = No;

            if(No < 0)
            {

                    printf("Invalid Number"); return -1;
            }

            while(Temp > 0 )
            {
                Dig = Temp %10;

                if(Dig % 2 == 0 && Dig != 0)
                {
                    ECnt++;
                }
                Temp = Temp/10;
            }

            printf("\n Count Of Even Digits in Given Number %d is = %d.", No, ECnt);

            getch();
            return 0;
}
