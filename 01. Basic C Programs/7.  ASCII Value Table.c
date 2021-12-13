//ASCII TABLES.....//GNU GCC Compiler....

#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0;

    printf("\n ASCII table =>\n\n");

    while(No < 128)
    {
            printf("\n \t %3d = %c.", No, No);

            No++;
    }

    printf("\n\n Thanks For Using Our Service........");

    getch();
    return 0;
}
