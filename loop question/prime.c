#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    if(n%i==0)
    break;
    if(i==n)
    {
        printf("prime number");

    }
    else 
    printf("not prime");
    return 0;
}   