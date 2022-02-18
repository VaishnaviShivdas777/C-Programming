/// Program To Check Given character is Uppercase Or Lowercase Or Digit Or Special Symbols

#include<stdio.h>
#include<conio.h>

void Check_Char(char);

int main()
{
    printf("\n Enter a Caharacter to Chevk Whether, \n (It Is Uppercase or Lowercase Or Digit Or Special Symbols) = ");

    Check_Char(getche());

    printf("\n\n Thanks");

    getch();
    return 0;

}

void Check_Char(char ch)
{
    if((ch >= 'A')  &&  (ch <= 'Z'))
    {
        printf("\n\n Given Character is Uppercase Letter. ");
    }
    else if((ch >= 'a')  &&  (ch <= 'z'))
    {
        printf("\n\n Given Character is Lower Letter. ");
    }
    else if((ch >= '0')  &&  (ch <= '9'))
    {
        printf("\n\n Given Character is Digit. ");
    }
    else
    {
        printf("\n\n Given Character is Special Symbols. ");
    }

    return;
}
