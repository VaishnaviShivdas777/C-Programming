//Enter Two Number And Calculate Addition, Substraction , Multiplication, Division. // GNU GCC Compiler..


#include<conio.h>
#include<stdio.h>

int main()

{
        int a,b,c,d,e,f;

        printf("Enter any two numbers= ");
        scanf("%d%d",&a,&b);

        c = a + b;
        d = a - b;
        e = a * b;
        f = a / b;

        printf("addition is       =   %d\n", c);

        printf("substraction is   =   %d\n", d);

        printf("division is       =   %d\n", e);

        printf("multiplication is =   %d\n", f);

        getch();
        return 0;
}
