// 2.Program Using getch,getche.c....// GNU GCC Compiler....

#include<stdio.h>
#include<conio.h>


int main()
{
    char name=getchar();

    putch('\n');
    putch('\n');
    putch('ABC');
    putch('\n');

    getche();

    putchar('\t');
    putchar(name);
    putchar('\n');
    putchar('W');

    getche();

    getch();
    return 0;
}
