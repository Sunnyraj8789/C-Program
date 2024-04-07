#include<stdio.h>
int main()
{
    int i=1,n,s=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+2*i-1;
    }
    printf("sum of %d",s);
    return 0;

}