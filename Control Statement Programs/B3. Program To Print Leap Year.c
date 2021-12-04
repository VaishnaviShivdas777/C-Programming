//program to print Leap Year... GNU GCC Compiler....

#include<stdio.h>
#include<conio.h>


int main()
{
    int year;
    printf("Enter the year = ");
    scanf("%d",&year);

    if(year==0)
    {
            printf("\n\n Invalid Year....\n\n Please Enter Valid Year");
    }

    else if(year%4==0)
    {
        printf("\n\n Leap year");
    }
    else
    {
        printf("Not leap year");

    }
    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
