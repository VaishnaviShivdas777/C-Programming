// Accept Array Element From User & Then Display Maximum & 2nd Minimum From All Elements - Using loop - with Macro.c  Using GNU GCC Compiler....

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>
#define size 7

int main()
{
    int i = 0, Max = 0, Min2 = 0, Bill[size] = {0};
    bool flag = 0;

    for( i = 0; i < size; i++)
    {
        printf("\n Enter Bill  No %d = ", (i+1));
        scanf("%d", &Bill[i]);

        if( i == 0)
        {
            Max = Bill[i];
            Min2 = Bill[i];
            flag = 1;
            continue;
        }

        if( Bill[i] >= Max)
        {
            if( flag == 1)
            {
                Min2 = Max;
                flag = 0;
            }
            Max = Bill[i];
        }

        else if( Bill[i] >= Min2 || flag == 1)
        {
            Min2 = Bill[i];
            flag = 0;
        }
    }

    getch();

    printf("\n\n======================================================================\n");

    printf("\n 1st Maximum Amount Received Today = %d", Max);

    printf("\n 2nd Maximum Amount Received Today =%d", Min2);

    printf("\n\n======================================================================\n");

    getch();
    return 0;
}
