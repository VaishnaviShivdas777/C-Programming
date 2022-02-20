/// GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>

int main()
{
            int Num[5] = {15,59,88,27,65};
            int  *Ptr = Num;

            printf("\n Base Address of Array is = %d", Num);
            printf("\n Value in Pointer is = %d", Ptr);
            printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);
            getch();

            Ptr = Ptr / 5;

            //  Ptr = Ptr * 5      =>  Ptr / (sizeof(<DataTypeOf Ptr>) * 5);
            //                             =>   2686712 / (sizeof(int) * 5)
            //                             =>   2686712 / ( 4 * 5)
            //                             =>   2686712  / 20
            //                             =>  1343335.6                // it won't be valid memory address


            printf("\n\n New Value in Pointer is = %d", Ptr);
            printf("\n Value of Array Element Where Pointer Pointing = %d", *Ptr);

            getch();
            return 0;
}
