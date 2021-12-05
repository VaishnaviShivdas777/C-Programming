//do - while program....

#include<stdio.h>
#include<conio.h>


int main()
{
    int p,i=0;
    printf("\n Enter a number= ");
    scanf("%d",&p);
    do
    {
        printf("\n %d",(p*i));
        i++;

    }while(i<=10);

    printf("\n Thanks!!!");

    getch();
    return 0;
}
