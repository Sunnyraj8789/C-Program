#include<stdio.h>
int main()
{
    int n,x,i;
    printf("enter the number");
    scanf("%d",&n);
    for(x=n+1;;x++)
    {
        for(i=2;i<=x;i++)
        if(x%i==0)
        break;
        if(i==x)
        {
            printf("next prime is %d",x);
            break;

        }
    }
return 0;
}