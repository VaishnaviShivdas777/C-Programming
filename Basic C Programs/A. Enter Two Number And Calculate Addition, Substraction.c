//Enter Two Number And Calculate Addition, Substraction . // GNU GCC Compiler..


#include<conio.h>
#include<stdio.h>

int main()

{
        int a,b,c,d;
        printf("Enter any two numbers= ");
        scanf("%d%d",&a,&b);

        c = a + b;
        d = a - b;

        printf("addition is       =   %d\n", c);

        printf("substraction is   =   %d\n", d);

        getch();
        return 0;
}
