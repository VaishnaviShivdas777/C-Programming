///Using GNU GCC Compiler.......

#include<stdio.h>
#include<conio.h>

void fun(int Num)
{
    printf("\n Box with stetue of size %d. Prepared", Num);

}

float gun (int No)
{
    float Prize = 110 *No;

    printf("\n Box Size = %d", No);

    fun(No);

    return Prize;
}

int main()
{
    float Ret = 0.0;

    Ret = gun(15);

    printf("\n Outcome = %f",Ret);
    getch();

    printf("\n Product is Dispatched");

    Ret = gun(25);
    printf("\n Outcome = %f", Ret);

    getch();
    return 0;
}
