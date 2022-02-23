//Using GNU GCC Compiler

#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={};
            int i = 0;

            puts("\n Enter a string : ");
            gets(cSrc);

            for(i = 0; i <= 50; i++)
            {
                        if(cSrc[i] == '\0')
                        {
                                break;
                        }
            }

            printf("\n  Length of given String is = %d",i);

            _getch();
            return 0;
}
