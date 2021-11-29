//Program Using getchar.c // GNU GCC Compiler


#include<stdio.h>
#include<conio.h>


int main()
{
    char ch = 'A';

    printf("\n Value Of character = %c.\n\n",ch);

    printf("\n Enter New character Value = ");

    ch = getchar();

    printf("\n\n New value Of character=<%c>.\n",ch);

    printf("\n Thanks For Using Our App.\n Press a key to Exit.");


    getch();
    return 0;
}
