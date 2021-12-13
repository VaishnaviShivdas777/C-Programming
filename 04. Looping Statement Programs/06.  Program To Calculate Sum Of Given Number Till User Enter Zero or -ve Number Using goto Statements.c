//Program To Calculate Sum Of Given Number Till User Enter Zero or -ve Number Using goto Statements.c

#include<stdio.h>
#include<conio.h>


int main()
{
    int No = 0, Sum = 0, Cnt = 1;

    printf("\n Enter Number To Calculate Their Sum \n Will Stop Summation After 0/-ve I/P =");

UP:
        printf("\n\t Enter No %d = ",Cnt);
        scanf("%d",&No);

        if(No<=0)
        {
            goto OUT;
        }

        Sum = Sum + No;
        Cnt++;

        goto UP;
OUT:

    printf("\n Press Any Key To Access get Summation Of Given Number => ");
    getche();

    printf("\n Summation of Given No=%d",Sum);

    printf("\n\n Thanks!!!");
    getch();
    return 0;
}
