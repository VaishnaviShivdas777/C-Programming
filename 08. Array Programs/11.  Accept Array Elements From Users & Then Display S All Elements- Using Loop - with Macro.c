// Accept Array Elements From Users & Then Display S All Elements- Using Loop - with Macro.c...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 7


int main()

{
    int i = 0, Bill_sum = 0, Bill[size] = {0};

    for(i = 0; i < size; i++)
    {
        SameBill:

        printf("Enter Element No %d =  ",(i + 1));
        scanf("%d", &Bill[i]);

        if(Bill[i]<=0)
        {
            printf("\n Invalide Amount....");
            goto SameBill;
        }

        Bill_sum += Bill[i];
    }

    getch();
    system("cls");

    printf("\n Bill Generated Today => \n");

    for(i = 0; i < size; i++)
    {
                printf("\n Amount In Bill No %d = %d ", (i + 1001), Bill[i]);
    }

    printf("\n\n========================================================\n");

    printf("\n Total Amount Received Today = %d", Bill_sum);

    getch();
    return 0;

}
