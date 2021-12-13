//Program To Calculate Sum Of Given Number Till User Enter Zero or -ve Number Using While Loop.c

#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0, Sum = 0, Cnt = 1;

    printf("\n Enter Number To Calculate Their Sum \n Will Stop Summation After 0/-ve I/P =");

     while(1)
    {
        printf("\n\t Enter No %d= ",Cnt);
        scanf("%d",&No);

        if(No<=0)
        {
            goto out;
        }

        Sum=Sum+No;
        Cnt++;
    }

    printf("\n Press Any Key To  Summation Of Given No=> ");
    getche();

    printf("\n Summation of Given No=%d",Sum);

    printf("\n\n Thanks!!!");
    getch();
    return 0;
}
