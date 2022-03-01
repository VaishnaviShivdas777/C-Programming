// Find Digits in Given String & Form a Number Through it
// Using GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={'\0'};
            int i = 0;
            int Num = 0;

            gets(cSrc);

            while(cSrc[i] != '\0')
            {
                        if( cSrc[i] >= '0' && cSrc[i] <= '9' )
                        {
                                    Num = (Num * 10) + (cSrc[i] - 48);
                        }

                        i++;
            }

            printf("\n  Number From Digits in Given String is = %d.", Num);

            _getch();
            return 0;
}
