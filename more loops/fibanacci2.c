#include<stdio.h>
int main()
{
    int n,a=-1,b=1,i,c;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);

    }
    return 0;
}