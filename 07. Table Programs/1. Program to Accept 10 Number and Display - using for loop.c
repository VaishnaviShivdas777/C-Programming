// program to accept 10 number and display - using for loop:- Using GNU GCC Compiler...

#include<conio.h>
#include<stdio.h>


int main()
{
    int No = 0, Sum = 0, Cnt = 0;

    printf("\n Enter 10 Numbers= ");

    for(Cnt = 1; Cnt <= 10; Cnt ++)
    {
        printf("\n\t Enter No %d = ",Cnt);
        scanf("%d",&No);

        Sum += Sum + No;
    }
    printf("\n Press any key to get summation of given number=> ");

    getche();
    system("cls");

    printf("\n Summation of Given No = %d",Sum);

    printf("\n Thanks");

    getch();
    return 0;
}
