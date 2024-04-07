#include<stdio.h>
int main()
{
    int a;
    printf("enter the three digit number");
    scanf("%d",&a);
    if(a>=100 && a<=999)
    {
        printf("three digit number");

    }
    else
    {
        printf("not");
    }
    return 0;
}