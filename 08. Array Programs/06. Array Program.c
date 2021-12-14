// Basic Array Program GNU GCC Compiler....


#include<stdio.h>
#include<conio.h>

int main()
{
    int values[5] = {10, 23, 45, 67, 89};

    printf("\n Value of 1st Element = %d ", values[0]);
    printf("\n Value of 2nd Element = %d ", values[1]);
    printf("\n Value of 3rd Element = %d ", values[2]);
    printf("\n Value of 4th Element = %d ", values[3]);
    printf("\n Value of 5th Element = %d ", values[4]);

    getch();

    values[4] = 51;
    values[5] = 32;
    values [3] = values[1] + values[2];

    printf("\n\n New Values => \n \n ");

    printf("\n Value of 101 Element = %d ", values[0]);
    printf("\n Value of 102 Element = %d ", values[1]);
    printf("\n Value of 103 Element = %d ", values[2]);
    printf("\n Value of 104 Element = %d ", values[3]);
    printf("\n Value of 105 Element = %d ", values[4]);

    getch();
    return 0;

}
