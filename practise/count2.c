#include<stdio.h>
int main()
{
    int x,n=0;
    printf("enter the number");
    scanf("%d",&x);
    while(x)
    {
        x=x/10;
        n++;
    }
    printf("digit is %d",n);
    return 0;
}