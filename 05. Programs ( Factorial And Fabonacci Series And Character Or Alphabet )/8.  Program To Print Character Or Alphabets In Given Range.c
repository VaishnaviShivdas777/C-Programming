//program to print character or alphabets in given range.. // GNU GCC Compiler...


#include<conio.h>
#include<stdio.h>

int main()
{
    char Sch='\0', Ech='\0';

    printf("\n Enter starting character= ");
    Sch=getche();

    printf("\n Enter ending character= ");
    Ech=getche();

    for(;Sch<=Ech;Sch++)
    {
        printf("\n %c",Sch);

    }
    printf("\n Thanks!!!");

    getch();
    return 0;
}
