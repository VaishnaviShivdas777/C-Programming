// Accept Array Elements From Users & Then Find Out User Entered Elements 1st Occurance in Array or Not.c Using GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#define size 7

int main()

{
    int i = 0, No = 0, Value[size] = {0};

    for( i = 0; i < size; i++ )
    {
        printf("\n Enter Value No %d = ", (i+1));
        scanf("%d", &No);
    }

    getch();
    printf("\n Enter element You Want To check in Array  = ");
    scanf("%d", &No);

    for( i = 0; i < size; i++)
    {
        if( Value[i] == No)
        {
            break;
        }
    }

    printf("\n\n=================================================================\n");

    if( i <  size)
    {
        printf("\n 1st Occurance Of %d in Array at Index = %d ", No,i);
    }
    else
    {
        printf("\n No Such Element Present in Array");
    }

    printf("\n\n=================================================================\n");

    getch();
    return 0;
}
