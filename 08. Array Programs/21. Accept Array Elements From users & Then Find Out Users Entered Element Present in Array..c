// Accept Array Elements From users & Then Find Out Users Entered Element Present in Array.c...Using GNU GCC Compiler,,

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define size 7

int main()
{
    int i = 0, No = 0, value[size] = {0};

    bool flag = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n Enter Value No %d = ", (i+1));
        scanf("%d",&value[i]);
    }

    getch();
    printf("\n Enter Element Which You Want To Check In Array = ");
    scanf("%d", &No);

    for(i = 0; i < size; i++)
    {
        if(value[i] == No)
        {
            flag = 1;
            break;
        }
    }
    system("cls");

    printf("\n\n=====================================================================\n");

    if(flag == 1)
    {
        printf("Given Element %d Present In Array", No);
    }
    else
    {
        printf("\n No Such Element Present In array");
    }

    printf("\n\n======================================================================\n");

    getch();
    return 0;
}
