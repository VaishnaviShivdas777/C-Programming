// 01. Pattern (Full Stars).c   Using GNU GCC Compiler...

    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int i = 0, j = 0, r = 0, c = 0;

        printf(" Enter Row & Column Values For Pattern:");
        scanf("%d%d", &r, &c);

        printf("\n==================Pattern============================\n\n");

        for(i = 1; i < r; i++)
        {
            for( j = 1; j <= c; j++)
            {
                printf("\t*");
            }
            printf("\n");
        }

        printf("\n==================Pattern============================\n\n");

        getch();
        return 0;
    }
