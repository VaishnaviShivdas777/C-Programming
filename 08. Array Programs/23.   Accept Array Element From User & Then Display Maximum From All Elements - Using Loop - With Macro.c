// Accept Array Element From User & Then Display Maximum From All Elements - Using loop - with Macro.c  Using GNU GCC Compiler....

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define size 7

int main()
{
    int i = 0, Max = 0, Max2 = 0, Bill[size] = {0};
    bool flag = 0;

    for( i = 0; i < size; i++)
    {
        printf("\n Enter Bill  No %d = ", (i+1));
        scanf("%d", &Bill[i]);

        if( (i == 0) || ( Max < Bill[i]))
        {
            Max = Bill[i];
        }
    }

    for( i = 0; i < size; i++)
    {
        if( Bill[i] == Max)
        {
            continue;
        }

        if(( flag == 0) || (Max2 < Bill[i]))
        {
            Max2 = Bill[i];

            flag = 1;
        }
    }

    getch();
    printf("\n\n====================================================================\n");

    printf("\n Maximum Amount Received Today = %d", Max);

    printf("\n 2nd Maximum Amount Received today =%d", Max2);

    printf("\n\n====================================================================\n");

    getch();
    return 0;
}
