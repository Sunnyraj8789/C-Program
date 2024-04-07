#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive ",a); //or printf( "is positive ");
    }
    else 
    {
        if(a<0)
        {
            printf("%d is negetive",a);
        }
        else
        {
        printf("%d is zero ",a);
        }
    }
    return 0;

}