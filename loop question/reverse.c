#include<stdio.h>
int main()
{
    int n,x=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n)
    { 
        x=x*10+n%10;
        n=n/10;

    }
    printf("reverse no is %d",x);
    return 0;
}