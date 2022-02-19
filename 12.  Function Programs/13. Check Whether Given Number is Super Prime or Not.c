/// Check Whether Given Number is Super Prime or Not...

#include<stdio.h>
#include<conio.h>

int Is_Prime(int);
int Is_Super_Prime(int);

int main()
{
    int Num = 0, Ret = 0;

    printf("\n Enter an Integer Number = ");
    scanf("%d", &Num);

    Ret = Is_Super_Prime(Num);

    if(Ret == -1)
    {
        printf("\n Given Number %d is Neutral Number",Num);
    }
    else if(Ret == 1)
    {
        printf("\n Given Number %d is Prime Number, But Not Super Prime",Num);
    }
    else if(Ret == 0)
    {
        printf("\n Given Number %d is Super Prime Number",Num);
    }
    else
    {
        printf("\n Given Number %d is Not Prime Number",Num);
    }

    printf("\n Thanks");

    getch();
    return 0;
}

int Is_Prime(int Num)
{
    /// Prime => 1
    ///Not Prime => 2
    ///Neutral =>-1

    int i = 0, Flag = -2;

    if((Num == 0) || (Num == 1))

    {
        Flag = -1;
        goto Dwn;
    }
    for( i = 2; i < Num; i++)
    {
        if( Num % i == 0 )
        {
            break;
        }
    }
    if ( Num == i)
    {
        Flag = 1;
    }
    else
    {
        Flag = 2;
    }

    Dwn:
        return Flag;
}

int Is_Super_Prime(int Num)
{
    /// Super Prime => 0
    /// Prime => 1
    /// Not Prime => 2
    /// Neutral => -1

    int Ret = 0;

    Ret = Is_Prime(Num);

    if( Ret == 1)
    {
        int Temp = Num, dSum = 0;

        while(Temp > 0)
        {
            dSum += Temp % 10;
            Temp /= 10;
        }
        if( Is_Prime(dSum) == 1)
        {
            Ret = 0;
        }
    }

    return Ret;
}
