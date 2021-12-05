//while program....

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i=1;

    while(i<=50)
    {
        if(i%2==0)
            printf("\n%d", i);
        i++;
    }

    printf("\n Thanks!!!");

    getch();
    return 0;
}
