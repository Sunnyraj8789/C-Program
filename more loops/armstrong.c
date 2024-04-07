#include<stdio.h>
int main()
{
    int x,y,n=0,d,p,i;
    printf("enter the number");
    scanf("%d",&x);
    y=x;
    while(y)
    {
        y=y/10;
        n++;
    }
    for(y=x;y;y=y/10)
    {
        d=y%10;
        for(p=1,i=1;i<=n;i++)
        p=p*d;
        sum=sum+p;
    }
    if(sum==x)
    printf("a%d is armstrong number",x);
    else
       printf("%d is  not armstrong number",x);
        return 0;

}