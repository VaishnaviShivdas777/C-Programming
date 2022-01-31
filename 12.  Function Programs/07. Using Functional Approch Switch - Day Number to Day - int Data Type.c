#include<stdio.h>
#include<conio.h>

void Display_Day(int);

int main()
{
    int Day = 0;

    printf("\n Enter Day Number (1 - 7) to View Day Text = ");
    scanf("%d", &Day);

    Display_Day(Day);

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
void Display_Day(int D)
{
    switch ( D )
    {
        case 1:
                    printf("\n Monday");
                    printf("\n Shiv");
                    break;
        case 2:
                    printf("Tuesday");
                    break;
        case 3:
                    printf("Wednesday");
                    break;
        case 4:
                    printf("Thursday");
                    break;
        case 5:
                    printf("Friday");
                    break;
        case 6:
                    printf("Saturday");
                    break;
        case 7:
                    printf("Sunday");
                    break;
        default:
                    printf("\n Invalid Day!!!!");
                    break;
    }
    return;
}
