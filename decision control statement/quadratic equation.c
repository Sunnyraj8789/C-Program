#include<stdio.h>
int main()
{
    float x,y;
    int a,b,c,D;
    printf("enter the coeficient of a,b,c");
    scanf("%d%d%d",&b,&a,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
            printf("roots are real and distinct");
    }
    if(D==0)
    {
        printf("roots are equal");
        x=-b/(2.0*a);
        printf("roots is %f",x);
    }
     if(D<0)
    {
        printf("roots are imaginary");
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2/a);
        printf("\nroots are %f and %f",x,y);
    }

    return 0;
}