 #include<stdio.h>
 #include<conio.h>

        int main()
        {
            int No = 0, Max = 0, Cnt = 0;

            printf("\n Enter 10 Numbers => ");

            for(Cnt = 1; Cnt <= 10; Cnt = 0)
            {
                printf("\n\t Enter No %d= ", Cnt);
                scanf("%d", &No);


                if( Cnt == 1 )
                {
                    Max = No;
                    continue;

                }

                if( No > Max )
                {
                    Max = No;
                }
           }
                printf("\n Press Any Key To get Maximum from Given No => ");
                getche();

                printf("\n Maximum of Given Number = %d", Max);
                printf("\n\n Thanks!!!!");

                getch();
                return 0;
}
