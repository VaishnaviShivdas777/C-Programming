// Program Using getchar...// GNU GCC Compiler....


#include<stdio.h>
#include<conio.h>


int main()
{
    char ch='A';

    printf("\n\n Value of Our Character is=%c.\n..........Hello Indians....\n\n",ch);

    printf("\n Are you Indian???(Yes/No)=");

    ch=getchar();

    if(ch=='y'|| ch=='Y')
    {
        printf("\n\n Welcome Dear \n\n");

    }
    else
    {
        printf("\n\n Bye Bye.....\n\n");

    }
    getch();
    return 0;
 }
