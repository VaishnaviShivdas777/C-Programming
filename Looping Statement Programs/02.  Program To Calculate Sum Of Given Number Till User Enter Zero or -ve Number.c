//Program To Calculate Sum Of Given Number Till User Enter Zero or -ve Number.c

#include<stdio.h>
#include<conio.h>


int main()

{
    int No = 0, Sum = 0, Cnt = 0;

    printf("\n Enter Number To Calculate Their Sum \n Will Stop Summation After/-ve I/P =");

    for(;Cnt=1; Cnt++)
    {
        printf("\n\t Enter No %d= ",Cnt);
        scanf("%d",&No);

        if(No<=0)
        {
            break;
        }
        Sum=Sum+No;
    }

    printf("\n Press Any Key To  Summation Of Given No=> ");
    getch();
system("cls");
    printf("\n Summation of Given No=%d",Sum);
    getch();
    return 0;
}
