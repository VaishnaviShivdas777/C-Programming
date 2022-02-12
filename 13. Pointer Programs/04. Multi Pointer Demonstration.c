#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 21;
    int *p = &No;
    int **q = &p;
    int ***m = &q;
    int ****v = &m;
    int *****r = &v;

    printf("\n %d",&No);
    printf("\n %d",&p);
    printf("\n %d",&q);
    printf("\n %d",&m);
    printf("\n %d",&v);
    printf("\n %d",&r);
    printf("\n\n=======================\n\n");

    printf("\n %d",No);
    printf("\n %d",&No);
    printf("\n %d",&p);
    printf("\n %d",*p);
    printf("\n %d",**r);
    printf("\n %d",**(&m));
    printf("\n %d",&(***v));
    printf("\n %d",****r);

    getch();
    return 0;

}
